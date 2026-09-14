#include <Stepper.h>
int stepsPerRevolution = 2048;
int motSpeed = 10; //rpm
Stepper myStp(stepsPerRevolution,8,10,9,11);
int wait = 1000;



void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
myStp.setSpeed(motSpeed);
}

void loop() {
  // put your main code here, to run repeatedly:
myStp.step(stepsPerRevolution);
delay(wait);
myStp.step(-stepsPerRevolution);
delay(wait);
}
