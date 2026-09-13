//Program to turn on a warning LED when potentiometer tap-in voltage exceeds a limit.

//Initialising variables 

int pin = A5; // Potentiometer analog tap in pin
float sig; //analog signal
float sigvolt; //voltage 

int wait = 1000;

int LEDpin = 8; //LED digital pin




void setup() {
  // put your setup code here, to run once:

//Setting up pin modes.
pinMode(pin,INPUT);
pinMode(LEDpin,OUTPUT);

//Setting up serial monitor
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

//getting tap-in analog signal
sig = analogRead(pin);

//Converting analog tap-in signal(0-1023) to voltage(0.0V-5.0V) using simple linear algebra.
sigvolt = (5./1023.)*sig;

//printin tap-in voltage
Serial.print("potentiometer tap voltage is = ");
Serial.println(sigvolt);

delay(wait);

//tap-in limit is 3.0V. LED turns on at or above 3.0V (logic below)
if (sigvolt>=3.0){
  digitalWrite(LEDpin,HIGH);
}

if (sigvolt<3.0){
  digitalWrite(LEDpin,LOW);
}

  //no delay here to ensure smooth potentiometer usage.

}
