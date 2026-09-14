
#include <Servo.h>
int ServoPin = 5;
float ServoPos=0;
Servo mySer;


int XPin = A0;


int VRX;






void setup() {
  // put your setup code here, to run once:
pinMode(XPin,INPUT);
Serial.begin(9600);
mySer.attach(ServoPin);
}

void loop() {
  // put your main code here, to run repeatedly:
VRX = analogRead(XPin);


Serial.print("X = ");
Serial.println(VRX);

ServoPos = (180./1023.)*VRX;
mySer.write(ServoPos);



}

