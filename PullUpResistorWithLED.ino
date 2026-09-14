int LEDPin = 8;
int buttonPin = 12;
int buttonread;
int wait = 500;


void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(LEDPin,OUTPUT);
pinMode(buttonPin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
buttonread = digitalRead(buttonPin);
Serial.println(buttonread);
delay(wait);

if(buttonread == 1){
  digitalWrite(LEDPin,LOW);
  Serial.println("NOT PUSHED!");
}
else{
  digitalWrite(LEDPin,HIGH);
  Serial.println("PUSHED!");
}
}
