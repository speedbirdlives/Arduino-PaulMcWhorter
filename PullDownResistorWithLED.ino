//Program to demonstrate the use of a Pull down resistor with a LED.

//variables and parameters
int ledpin = 8;
int buttonpin = 12;
int buttonread;
int wait = 500;



void setup() {
  // put your setup code here, to run once:

//Setting up serial monitor and pins.
Serial.begin(9600);
pinMode(ledpin,OUTPUT);
pinMode(buttonpin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

//reading from button.
buttonread = digitalRead(buttonpin);
Serial.println(buttonread);

delay(wait);

//Logic
//LED turns on when button is pushed. Off when button not pushed.
if(buttonread==0){
  digitalWrite(ledpin,LOW);
  Serial.println("NOT PUSHED!");
}
else{
  digitalWrite(ledpin,HIGH);
  Serial.println("PUSHED!");
}
}
