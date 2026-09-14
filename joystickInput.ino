//Simple program to demonstrate input variables of a Joystick

// (0,0) => (511,511)
// +X=1023 , -X=0
// +Y=1023 , -Y=0
// Switch 0(pressed) or 1(not pressed)

int XPin = A0; //Xpin to analog pin
int YPin = A1; //Ypin to analog pin
int Switch = 2; //Click switch of the joystick to digital pin

int VRX; //X-axis potentiometer analog reading
int VRY; //Y-axis potentiometer analog reading
int Swi; //JOystick button digital reading

int wait = 2500;




void setup() {
  // put your setup code here, to run once:
  
  //Setting up pinModes and Serial monitor
pinMode(Switch,INPUT);
pinMode(XPin,INPUT);
pinMode(YPin,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

//analogRead and digitalRead through respective pins
VRX = analogRead(XPin);
VRY = analogRead(YPin);
Swi = digitalRead(Switch);

//X-axis
Serial.print("X = ");
Serial.println(VRX);

//Y-axis
Serial.print("Y = ");
Serial.println(VRY);

//Switch(button)
Serial.println("Switch = ");
Serial.println(Swi);

delay(wait);



}
