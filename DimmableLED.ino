float sigread;
float sigwrite;

int readPin = A5;
int LEDPin = 3;


void setup() {
  // put your setup code here, to run once:

Serial.begin(9600);

pinMode(readPin,INPUT);
pinMode(LEDPin,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  sigread = analogRead(readPin);

  sigwrite = (255./1023.)*sigread;

  analogWrite(LEDPin,sigwrite);



}
