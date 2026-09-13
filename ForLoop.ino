
int red = 9;
int yel = 6;

int waitR = 1000;
int waitY = 1000;
int gap = 2000;

int YBlink = 3;
int RBlink = 5;

int j;
int k;

void setup() {
  // put your setup code here, to run once:
pinMode(red,OUTPUT);
pinMode(yel,OUTPUT);

Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

for (j=1;j<=YBlink;j++)
{
  digitalWrite(yel,HIGH);
  delay(waitY);
  digitalWrite(yel,LOW);
  delay(waitY);

  Serial.println(j);
  

}

Serial.println(" ");
delay(gap);

for(k=1;k<=RBlink;k++){
  digitalWrite(red,HIGH);
  delay(waitR);
  digitalWrite(red,LOW);
  delay(waitR);

  Serial.println(k);
  

}

Serial.println(" ");
delay(gap);

}
