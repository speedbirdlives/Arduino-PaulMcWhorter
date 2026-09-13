int red = 8;
int green = 9;
int blue = 10;

int wait = 2000;

String ask = "Enter what color you want: ";
int color;


void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(red,OUTPUT);
pinMode(green,OUTPUT);
pinMode(blue,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(ask);
while(Serial.available()==0){

}
color = Serial.parseInt();

if(color == 1){
  digitalWrite(red,HIGH);
  digitalWrite(green,LOW);
  digitalWrite(blue,LOW);
}

if(color == 2){
  digitalWrite(red,LOW);
  digitalWrite(green,HIGH);
  digitalWrite(blue,LOW);
}

if(color == 3){
  digitalWrite(red,LOW);
  digitalWrite(green,LOW);
  digitalWrite(blue,HIGH);
}

delay(wait);
}
