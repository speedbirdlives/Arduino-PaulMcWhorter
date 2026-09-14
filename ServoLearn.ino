//Simple program to explain the usage of a Servo motor.


//Include Servo extension package from the library
#include <Servo.h>

//Servo parameters
int servoPin = 10; //Digital pin
int servoPos = 0; //Servo position => Default set to 0 degrees

Servo mySer; //Defining and naming the servo motor

void setup() {
  // put your setup code here, to run once:

//Setting up serial monitor
Serial.begin(9600);

//Setting up Servo motor
mySer.attach(servoPin);
}

void loop() {
  // put your main code here, to run repeatedly:

//Command to write position for Servo motor (in degrees) (with reference to default position => 0 degrees)
mySer.write(servoPos);
}
