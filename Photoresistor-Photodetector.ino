//Simple program which uses photoresistor to detect light intensity and turn on respective led.
//High intensity => Low resistance
//Low intensity => High resistance

//Initialising variables
int lightPin = A0; //Photoresistor analogRead pin
int LightVal; //Analogread resistance value
int wait = 1000;

//LEDPin variables
int red=8;
int green=9;

void setup() {
  // put your setup code here, to run once:

  //Setting up serial monitor and light pins.
pinMode(lightPin,INPUT);
pinMode(red,OUTPUT);
pinMode(green,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  //Analog reading photoresistor resistance
LightVal = analogRead(lightPin);
Serial.println(LightVal);

//LOW intensity => Green on and Red off.
if(LightVal>=400){
  digitalWrite(green,HIGH);
  digitalWrite(red,LOW);
}

//HIGH intensity => Green off and Red on.
if(LightVal<400){
  digitalWrite(red,HIGH);
  digitalWrite(green,LOW);
}

  //Wait time for main loop.
delay(wait);
}
