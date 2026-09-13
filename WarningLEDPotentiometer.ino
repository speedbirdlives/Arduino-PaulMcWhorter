
int pin = A5;
float sig;
float sigvolt;

int wait = 1000;

int LEDpin = 8;




void setup() {
  // put your setup code here, to run once:

pinMode(pin,INPUT);
pinMode(LEDpin,OUTPUT);

Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

sig = analogRead(pin);
sigvolt = (5./1023.)*sig;
Serial.print("potentiometer tap voltage is = ");
Serial.println(sigvolt);
delay(wait);


if (sigvolt>=3.0){
  digitalWrite(LEDpin,HIGH);
}

if (sigvolt<3.0){
  digitalWrite(LEDpin,LOW);
}

}
