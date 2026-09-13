int red = 9;
int wait = 500;
int wait2 = 2000;
int usercount;
int i;

String msg = "Enter the number of times you want to blink the LED: ";


void setup() {
  // put your setup code here, to run once:
pinMode(red,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(msg);
while (Serial.available()==0){

}
usercount = Serial.parseInt();
delay(wait);

for(i=1;i<=usercount;i++){
  digitalWrite(red,HIGH);
  delay(wait);
  digitalWrite(red,LOW);
  delay(wait);
}

delay(wait2);
}
