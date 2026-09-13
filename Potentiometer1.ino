
int readPin = A5;
float sig1 = 0;
float sigvolt = 0;

int wait = 2000;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(readPin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
sig1 = analogRead(readPin);
sigvolt = (5./1023.)*sig1;

Serial.println(sigvolt);
delay(wait);
}
