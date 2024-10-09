/*
Ini adalah header file untuk mengoperasikan motor. Pin-pin dinyatakan.
PinMODEs are NOT declared here.
*/

#include  "Arduino.h"
#include <math.h>


float pi = 3.1415926535; //approximation of pi value. Used to measure position in radians.
class Motor 
{
    private:
    bool motordir; //motor direction.
    public:
    uint8_t enc_pin_A; 
    uint8_t enc_pin_B;
    uint8_t l_pwm_pin;
    uint8_t r_pwm_pin;

    bool l_en_pin;
    bool r_en_pin; //R_EN PIN of the motor 

    int enc_val;

    bool l_en_val = true; //enable value of the motor
    bool r_en_val = true; //encable value of the motor

    int pprval;
    int pos = 0; //as opposed to older position.
    int posdeg=0;
    int pos_i = 0; //new position
    int vel_i = 0; //current velocity
    Motor(uint8_t A, uint B, uint8_t C, uint8_t D, uint8_t E, uint8_t F, int ppr){ /*
    A adalah enc A, enc B, lrpwmpin, rpwmpin, lenpin, renpin, pprval*/
        enc_pin_A = A;
        enc_pin_B = B;
        l_pwm_pin = C;
        r_pwm_pin = D;
        l_en_pin = E;
        r_en_pin = F;
        pprval = ppr;
    }
    
    Motor(int A, uint B, uint8_t C, uint8_t D, uint8_t E, uint8_t F){ //L_EN and R_EN is HIGH by default.
        enc_pin_A = A;
        enc_pin_B = B;
        l_pwm_pin = C;
        r_pwm_pin = D;
        l_en_pin = E;
        r_en_pin = F;
        pprval = 700; //default value is set for PG28 magnetic internal encoder ppr value
    }
    void enc_reading_pos();//encoder reading
    void change_EN_val(bool r, bool l); //change things to enable false
    void move(uint8_t pwmr, uint8_t pwml);
    void move_stop(); //set pwm to zero.
    //void move_in_speed(uint16_t speed); //move until motor reaches certain speed.
    void move_until_deg(uint8_t pwmr, uint8_t pwml, uint16_t deg); //move until certain degree. constant pwm.
    void enc_reading_pos();
};

void Motor::change_EN_val(bool r, bool l){
    l_en_val = false;
    r_en_val = false;
}

void Motor::move(uint8_t pwmr, uint8_t pwml){ //this is a primitive move as it is done in constant PWM.
    analogWrite(l_pwm_pin, pwml);
    analogWrite(r_pwm_pin, pwmr);
}

void Motor::move_stop(){ //this is solely for stopping.
    analogWrite(l_pwm_pin, 0);
    analogWrite(r_pwm_pin, 0);
}
 
void Motor::enc_reading_pos(){ //DO NOT FORGET TO ATTACHINTERRUPT
    bool b = digitalRead(enc_pin_B); //enc reading pos is an interrupt.
    int increment = 0;
    //checkdirection part
    if(b == true){
        increment = 1;
    }
    else{
        increment = -1;
    }
    pos+=increment;
    posdeg = (pos/pprval)*360;
}

void Motor::move_until_deg(uint8_t pwmr, uint8_t pwml, uint16_t deg){ //these are primitive functions where pwm values are constant.
    int motorpos = pos;
    if (deg < posdeg){
        pwml = 0;
    }
    else{
        pwmr = 0;
    }
    while(motorpos<deg){
        enc_reading_pos();
        move(pwmr, pwml);
    }
    move_stop(); //stop it
}


//void Motor::move_in_speed(uint16_t speed){ //move until yeah, a certain pulse per second.
    //dipanggil saat attachinterrupt terjadi.
    
  //  uint16_t speedtarg = speed; 
    /*
    When encoder B is HIGH, STM32 Blue Pill is going to be interrupted. 
        1. Baca encoder
        2. Bila kurang, naikkan PWM
        3. Bila kelebihan, turunkan PWM
    This function measures time by its won. Speed is in encoder reading per second.
    */
    //noInterrupts(); //no interrupt while measuring speed.
  //  enc_reading_pos()