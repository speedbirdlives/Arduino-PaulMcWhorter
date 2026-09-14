//Simple program to control servo motor position based on light intensity.
//Application: Display if the day is sunny,cloudy or if its night.

//Incomplete program - Move to some other one :D. Sorry for the inconvenience.

#include <Servo.h>

int ServoPin = 10;
int ReadPin = A0;

int ServoPos;
int reading;

Servo mySer;

void setup() {
  // put your setup code here, to run once:

Serial.begin(9600);
mySer.attach(ServoPin); 
pinMode(ReadPin,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

reading = analogRead(ReadPin);
Serial.println(reading);

}
