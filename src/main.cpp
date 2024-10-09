#include <Arduino.h>
#include<MotorCon.h>
#include<ExpandingOperation.h>
#include <STM32_CAN.h>

// put function declarations here:

int ppr = 700; //ppr value of the motor.

Motor EXP_L(PA11, PA10, PA0, PA1, PA4, PA5, ppr); //LEFT
Motor EXP_R(PA9, PA8, PA6, PA7, PA15, PA12, ppr); //right
Motor EXP_U(PB15, PB14, PA2, PA3, PB4, PB3, ppr); //up

STM32_CAN Can(CAN1, ALT);

static CAN_message_t CAN_RX_msg;

void setup() {
  Serial.begin(9600);
  
  //encoder pins
  pinMode(PA11, INPUT);
  pinMode(PA10, INPUT);
  pinMode(PA9, INPUT);
  pinMode(PA8, INPUT);
  pinMode(PB15, INPUT);
  pinMode(PB14, INPUT);
  //L PWM PINS
  pinMode(PA0, OUTPUT);
  pinMode(PA6, OUTPUT);
  pinMode(PA2, OUTPUT);
  //R PWM PINS
  pinMode(PA1, OUTPUT);
  pinMode(PA7, OUTPUT);
  pinMode(PA3, OUTPUT);
  //EN Pins
  pinMode(PA4, OUTPUT);
  pinMode(PA15, OUTPUT);
  pinMode(PB4, OUTPUT);
  pinMode(PA12, OUTPUT);
  pinMode(PA5, OUTPUT);

  //R_EN Pins.  
  //R_EM, and L_EN are always high. By default
  std::function<void()> encreadL = std::bind(&Motor::enc_reading_pos, &EXP_L); //designing the callable. I DO NOT KNOW HOW DOES THIS WORK. ITS MAGIC.
  attachInterrupt(digitalPinToInterrupt(PA11), encreadL, RISING);
  std::function<void()> encreadR = std::bind(&Motor::enc_reading_pos, &EXP_R);
  attachInterrupt(digitalPinToInterrupt(PA9), encreadR, RISING);
  std::function<void()> encreadU = std::bind(&Motor::enc_reading_pos, &EXP_U);
  attachInterrupt(digitalPinToInterrupt(PB15), encreadU, RISING); //if encoder reads high (which means, it is moving, it'll interrupt anything else).

}

void loop() {
  // put your main code here, to run repeatedly:
  
  noInterrupts();

  interrupts(); //turn back interrupts ON.
}

// put function definitions here:

