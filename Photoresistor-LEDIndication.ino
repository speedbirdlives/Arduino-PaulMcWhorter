
int lightPin = A0;
int LightVal;
int wait = 1000;

int red=8;
int green=9;

void setup() {
  // put your setup code here, to run once:
pinMode(lightPin,INPUT);
pinMode(red,OUTPUT);
pinMode(green,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
LightVal = analogRead(lightPin);
Serial.println(LightVal);

if(LightVal>=400){
  digitalWrite(green,HIGH);
  digitalWrite(red,LOW);
}
if(LightVal<400){
  digitalWrite(red,HIGH);
  digitalWrite(green,LOW);
}

delay(wait);
}
