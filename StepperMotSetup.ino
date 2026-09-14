//Program on how to use a Stepper motor.

//include necessary package
#include <Stepper.h>

//parameters
int stepsPerRevolution = 2048; //divide each revolution into small steps
int motSpeed = 10; //rpm

//defining the stepper motor
Stepper myStp(stepsPerRevolution,8,10,9,11);

int wait = 1000;



void setup() {
  // put your setup code here, to run once:
  
//Setting up stepper motor and serial monitor
Serial.begin(9600);
myStp.setSpeed(motSpeed); //sets rpm
}

void loop() {
  // put your main code here, to run repeatedly:

// motor turns 1 revolution clockwise
myStp.step(stepsPerRevolution);
delay(wait);
// then 1 revolution anticlockwise
myStp.step(-stepsPerRevolution);
delay(wait);
}
