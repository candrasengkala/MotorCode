#include <Arduino.h>

const int Kiri_LPWM = PA0;
const int Kiri_RPWM = PA1;

const int Kiri_L_EN = PA4;
const int Kiri_R_EN = PA5;

uint8_t R_PWM;
uint8_t L_PWM;

bool L_EN_VAL;
bool R_EN_VAL;

// put function declarations here:
// int myFunction(int, int);

void setup() {
  pinMode(Kiri_LPWM, OUTPUT);
  pinMode(Kiri_RPWM, OUTPUT);

  pinMode(Kiri_L_EN, OUTPUT);
  pinMode(Kiri_R_EN, OUTPUT);


  // put your setup code here, to run once:

  digitalWrite(Kiri_L_EN, HIGH);
  digitalWrite(Kiri_R_EN, HIGH);


  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  analogWrite(Kiri_LPWM, 100);
  delay(300);        
  analogWrite(Kiri_LPWM, 0);
  delay(300);
  analogWrite(Kiri_RPWM, 100);
  delay(300);        
  analogWrite(Kiri_RPWM, 0);
  delay(300);
  // put your main code here, to run repeatedly:
// wait for a second
}

// put function definitions here:
//void expand(){

//}