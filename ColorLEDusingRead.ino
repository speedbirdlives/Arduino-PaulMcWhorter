//Simple program to demonstrate a RGB led using user input for the color.

//Same as RGBLed.ino. CHeck that file out.
//Here we are using string as the user input instead of integer in RGBLed.ino.


int red =6;
int green =7;
int blue =8;

int wait = 2000;

String ask = "Enter the color in all small letters: ";



void setup() {
  // put your setup code here, to run once:
pinMode(red,OUTPUT);
pinMode(green,OUTPUT);
pinMode(blue,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(ask);

while(Serial.available() == 0){

}
ask = Serial.readString();

if(ask == "red"){
  digitalWrite(red,HIGH);
  digitalWrite(green,LOW);
  digitalWrite(blue,LOW);
}
if(ask == "green"){
  digitalWrite(red,LOW);
  digitalWrite(green,HIGH);
  digitalWrite(blue,LOW);
}
if(ask == "blue"){
  digitalWrite(red,LOW);
  digitalWrite(green,LOW);
  digitalWrite(blue,HIGH);
}


delay(wait);

}
