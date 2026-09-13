

int read = A0;
int readVal=0;
float volt = 0;
int wait = 1000;


void setup() {
  // put your setup code here, to run once:
pinMode(read,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
readVal = analogRead(read);
volt = (5./1023.)*readVal;
Serial.println(volt);
delay(wait);
}
