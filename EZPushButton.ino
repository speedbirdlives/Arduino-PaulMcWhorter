//Program for an easy way to use a Push button by Paul McWhorter

//Required variables and parameters
int buttonPin = 2;
int buttonValue;



void setup() {
  // put your setup code here, to run once:

//setting up pins and serial monitor
pinMode(buttonPin,INPUT);
digitalWrite(buttonPin,HIGH);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

//logic
buttonValue = digitalRead(buttonPin);
Serial.println(buttonValue);

//We implement this buttonValue in any usage cases.
}
