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
    uint8_t enc_pin_A; 
    uint8_t enc_pin_B;
    uint8_t l_pwm_pin;
    uint8_t r_pwm_pin;

    bool l_en_pin;
    bool r_en_pin; //R_EN PIN of the motor 

    int enc_val;

    bool l_en_val = true; //enable value of the motor
    bool r_en_val = true; //encable value of the motor

    bool motordir; //motor direction.
    public:
    int pprval;
    int pos = 0;
    int posdeg=0;
    int posrad=0;
    Motor(uint8_t A, uint B, uint8_t C, uint8_t D, bool E, bool F, int ppr){
        enc_pin_A = A;
        enc_pin_B = B;
        l_pwm_pin = C;
        r_pwm_pin = D;
        l_en_pin = E;
        r_en_pin = F;
        pprval = ppr;
    }
    
    Motor(uint8_t A, uint B, uint8_t C, uint8_t D){ //L_EN and R_EN is HIGH by default.
        enc_pin_A = A;
        enc_pin_B = B;
        l_pwm_pin = C;
        r_pwm_pin = D;
        l_en_pin = true;
        r_en_pin = true;
        pprval = 700; //default value is set for PG28 magnetic internal encoder ppr value
    }
    int enc_reading_pos();
    void change_EN_val(bool r, bool l);
    void move(uint8_t pwmr, uint8_t pwml);
    void move_stop();
    void move_until_speed(uint8_t pwmr, uint8_t pwml, uint16_t speed, int timebegin); //move until motor reaches ceratin PWM.
    void move_until_deg(uint8_t pwmr, uint8_t pwml, uint16_t deg);
};

void Motor::change_EN_val(bool r, bool l){
    l_en_val = false;
    r_en_val = false;
}

void Motor::move(uint8_t pwmr, uint8_t pwml){
    analogWrite(l_pwm_pin, pwml);
    analogWrite(r_pwm_pin, pwmr);
}

void Motor::move_stop(){ //this is solely for stopping.
    analogWrite(l_pwm_pin, 0);
    analogWrite(r_pwm_pin, 0);
}
 
int Motor::enc_reading_pos(){ //DO NOT FORGET TO ATTACHINTERRUPT
    int b = digitalRead(enc_pin_B);
    int increment = 0;
    //checkdirection part
    if(b == true){
        increment = 1;
    }
    else{
        increment = -1;
    }
    pos+=increment;
    posdeg = pos/700*360;
    posrad = (pos/700)*2*pi;
}

void Motor::move_until_deg(uint8_t pwmr, uint8_t pwml, uint16_t deg){
    int motorpos = enc_reading_pos();
    while(motorpos<deg){
        move(pwmr, pwml);
    }
}

void Motor::move_until_speed(uint16_t speed, int timebegin){ //move until yeah, a certain RPM.
    int b = digitalRead(enc_pin_B);
    int increment = 0;
    uint16_t vel = 0;
    //checkdirection part
    if(b == true){
        increment = 1;
    }
    else{
        increment = -1;
    }
    pos = pos + increment;

    //returned speed is in pulse per second
    long currT = micros();
    float deltaT = ((float) (currT - timebegin))/10^6;

    int velocity_i = increment/deltaT;
    prevT_i = currT;
    while (velocity < speed){   
        move(pwmr, pwml);
    }
}
