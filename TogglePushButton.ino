int LEDState = 0;// to indicate if the LED is on or off
int LEDPin = 8;
int buttonPin = 12;
int buttonNew;
int buttonOld = 1;
int wait = 100;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(LEDPin,OUTPUT);
pinMode(buttonPin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
buttonNew=digitalRead(buttonPin);

if(buttonOld == 0  &&  buttonNew==1){
  if(LEDState == 0){
    digitalWrite(LEDPin,HIGH);
    LEDState == 1;
  }
  else{
    digitalWrite(LEDPin,LOW);
    LEDState == 0;
  }
}
buttonOld = buttonNew;
delay(wait);
}
