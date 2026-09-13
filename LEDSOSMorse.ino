
//program to display SOS using morse code using 1 LED.
// SOS Morse is ... --- ... (S,O,S)

void setup() {
  // put your setup code here, to run once:

  //initialising led pinmode.
pinMode(8,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  // S => ...
digitalWrite(8,HIGH);
delay(300);
digitalWrite(8,LOW);
delay(300);
digitalWrite(8,HIGH);
delay(300);
digitalWrite(8,LOW);
delay(300);
digitalWrite(8,HIGH);
delay(300);
digitalWrite(8,LOW);
delay(300);

  // O => ---
digitalWrite(8,HIGH);
delay(700);
digitalWrite(8,LOW);
delay(700);
digitalWrite(8,HIGH);
delay(700);
digitalWrite(8,LOW);
delay(700);
digitalWrite(8,HIGH);
delay(700);
digitalWrite(8,LOW);
delay(700);

  // S => ...
digitalWrite(8,HIGH);
delay(300);
digitalWrite(8,LOW);
delay(300);
digitalWrite(8,HIGH);
delay(300);
digitalWrite(8,LOW);
delay(300);
digitalWrite(8,HIGH);
delay(300);
digitalWrite(8,LOW);
delay(300);

  // final delay to seperate the looping SOS signals
delay(2000);
}
