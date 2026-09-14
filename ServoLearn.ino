#include <Servo.h>

int servoPin = 10;
int servoPos = 0;

Servo mySer;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
mySer.attach(servoPin);
}

void loop() {
  // put your main code here, to run repeatedly:
mySer.write(servoPos);
}
