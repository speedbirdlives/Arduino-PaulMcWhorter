
int redLED=8;
float pi=3.142;
int dit=300;
int dah=700;



void setup() {
  // put your setup code here, to run once:
pinMode(redLED,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(redLED,HIGH);
delay(300);
digitalWrite(redLED,LOW);
delay(300);
digitalWrite(redLED,HIGH);
delay(300);
digitalWrite(redLED,LOW);
delay(300);
digitalWrite(redLED,HIGH);
delay(300);
digitalWrite(redLED,LOW);
delay(300);

digitalWrite(redLED,HIGH);
delay(700);
digitalWrite(redLED,LOW);
delay(700);
digitalWrite(redLED,HIGH);
delay(700);
digitalWrite(redLED,LOW);
delay(700);
digitalWrite(redLED,HIGH);
delay(700);
digitalWrite(redLED,LOW);
delay(700);

digitalWrite(redLED,HIGH);
delay(300);
digitalWrite(redLED,LOW);
delay(300);
digitalWrite(redLED,HIGH);
delay(300);
digitalWrite(redLED,LOW);
delay(300);
digitalWrite(redLED,HIGH);
delay(300);
digitalWrite(redLED,LOW);
delay(300);

delay(2000);
}

