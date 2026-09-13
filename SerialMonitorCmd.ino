
int j=1;
int wait = 1000;
String str = "j = ";


void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.print(str);
Serial.println(j);
j=j+1;
delay(wait);
}
