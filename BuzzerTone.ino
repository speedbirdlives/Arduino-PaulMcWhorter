
int buzzpin = 8;
int wait1 = 100;
int wait2 = 200;
int i;
int j;



void setup() {
  // put your setup code here, to run once:
pinMode(buzzpin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

for(i=1;i<=100;i++){


  digitalWrite(buzzpin,HIGH);
  delay(wait1);
  digitalWrite(buzzpin,LOW);
  delay(wait1);


  digitalWrite(buzzpin,HIGH);
  delay(wait2);
  digitalWrite(buzzpin,LOW);
  delay(wait2);



}

}
