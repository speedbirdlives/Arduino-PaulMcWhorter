//Simple program to operate a servo motor using a joystick.

#include <Servo.h> //Include Servo library

//Servo parameters
int ServoPin = 5;
float ServoPos=0;
Servo mySer;


//Joystick parameters
int XPin = A0;
int VRX;



void setup() {
  // put your setup code here, to run once:

//Setting up pin, servo and serial monitor.
pinMode(XPin,INPUT);
Serial.begin(9600);
mySer.attach(ServoPin);
}

void loop() {
  // put your main code here, to run repeatedly:

//Analog reading joystick x-axis value
VRX = analogRead(XPin);

//Printing joystick value
Serial.print("X = ");
Serial.println(VRX);

//Simple linear relation between joystick VRX and ServoPosition. 0=>0 , 180=>1023
ServoPos = (180./1023.)*VRX;

//Writing the ServoPos into servo motor after conversion
mySer.write(ServoPos);



}

