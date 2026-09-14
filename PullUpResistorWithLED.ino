//Program to demonstrate Pull Up resistor with LED.

//Required parameters
int LEDPin = 8;
int buttonPin = 12;
int buttonread;
int wait = 500;


void setup() {
  // put your setup code here, to run once:

//Setting up pins and serial monitor.
Serial.begin(9600);
pinMode(LEDPin,OUTPUT);
pinMode(buttonPin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

//reading from the button
buttonread = digitalRead(buttonPin);
Serial.println(buttonread);
delay(wait);

//Logic
//LED turns on if button is pushed. Off if button is not pushed.
if(buttonread == 1){
  digitalWrite(LEDPin,LOW);
  Serial.println("NOT PUSHED!");
}
else{
  digitalWrite(LEDPin,HIGH);
  Serial.println("PUSHED!");
}
}
