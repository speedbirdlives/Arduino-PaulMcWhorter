// Program to measure potentiometer tap in votage.

//initialising variables

int readPin = A5; //Analog read pin 5 for Potetiometer tap in voltage.

float sig1 = 0; //Analog signal variable

float sigvolt = 0; //Voltage at tap in

int wait = 2000;

void setup() {
  // put your setup code here, to run once:

  //Setting up serial monitor
Serial.begin(9600);

  //Setting up readPin to INPUT mode
pinMode(readPin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  //reading analog signal
sig1 = analogRead(readPin);

  // converting analog(0-1023) into volts(0V-5V) - Simple linear function
sigvolt = (5./1023.)*sig1;

  // Printing potentiometer tap in voltage
Serial.println(sigvolt);
delay(wait);
}
