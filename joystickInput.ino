
int XPin = A0;
int YPin = A1;
int Switch = 2;

int VRX;
int VRY;
int Swi;

int wait = 2500;




void setup() {
  // put your setup code here, to run once:
pinMode(XPin,INPUT);
pinMode(YPin,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
VRX = analogRead(XPin);
VRY = analogRead(YPin);
Swi = digitalRead(Switch);


Serial.print("X = ");
Serial.println(VRX);

Serial.print("Y = ");
Serial.println(VRY);

Serial.println("Switch = ");
Serial.println(Swi);

delay(wait);



}
