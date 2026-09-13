// Program to create a dimmable led by controlling its brightness using potentiometer tap in voltage.

float sigread; // analog signal to read from potentiometer
float sigwrite; // analog write signal to LED.

int readPin = A5; //potentiometer
int LEDPin = 3; //led


void setup() {
  // put your setup code here, to run once:

  //Setting up serial monitor
Serial.begin(9600);

pinMode(readPin,INPUT); //potentiometer tap in analog signal
pinMode(LEDPin,OUTPUT); //led output pin

}

void loop() {
  // put your main code here, to run repeatedly:

  // reading from potentiometer
  sigread = analogRead(readPin);

  sigwrite = (255./1023.)*sigread; //pot analog signal(0-1023) convert to led analog signal(0-255)=>(0V-5V)
  //Simple linear function

  analogWrite(LEDPin,sigwrite); //analogWrite to led (as output)



}
