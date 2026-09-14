//Simple program to demonstrate the use of a Push Button as a toggle switch.

int LEDState = 0;// to indicate if the LED is on or off
int LEDPin = 8; //LED digital pin
int buttonPin = 12; //Button digital pin

//button states are defined below
int buttonNew;
int buttonOld = 1;

int wait = 100;

void setup() {
  // put your setup code here, to run once:
//Setting up pinModes and Serial monitor
Serial.begin(9600);
pinMode(LEDPin,OUTPUT);
pinMode(buttonPin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  //reading out state of the button as a digital signal
buttonNew=digitalRead(buttonPin);

  //logic
if(buttonOld == 0  &&  buttonNew==1){
  if(LEDState == 0){
    digitalWrite(LEDPin,HIGH);
    LEDState == 1; //LED is on now
  }
  else{
    digitalWrite(LEDPin,LOW);
    LEDState == 0; //LED is off
  }
}
buttonOld = buttonNew; //NEW state of the button is defined.
  
delay(wait);//small delay in the main void loop
}
