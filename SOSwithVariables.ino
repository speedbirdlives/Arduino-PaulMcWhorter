// Same SOS morse code program using delay variables

//Setting up variables

int redLED=8; // Red led at pin 8
float pi=3.142; 

int dit=300; // dit represents "."
int dah=700; // dah represents "-"



void setup() {
  // put your setup code here, to run once:

  //setting up pin to output
pinMode(redLED,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  // SOS in morse is ... --- ... (S,O,S)

  // S => ... (dit dit dit)
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

  // O => --- (dah dah dah)
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

  
// S => ... (dit dit dit)
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

  // final delay between two SOS signals to seperate them.
delay(2000);
}

