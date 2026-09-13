int myNum;
int Buzpin = 6;
int wait = 1000;
String ask = "Enter a number: ";
String warning = "Your number is above 10.";


void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(Buzpin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(ask);
while(Serial.available()==0){

}
myNum = Serial.parseInt();

if (myNum>10)
{
  Serial.println(warning);
  digitalWrite(Buzpin,HIGH);
  delay(wait);
  digitalWrite(Buzpin,LOW);
}


delay(wait);
}
