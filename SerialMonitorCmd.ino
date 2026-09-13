//program to display working of serial monitor using infinite loop.

//initialising the variables.
int j=1;
int wait = 1000;
String str = "j = ";


void setup() {
  // put your setup code here, to run once:

  //Setting up the Serial Monitor
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  //Infinite main loop.
  //It just goes on adding 1 to j and displaying.
Serial.print(str);
Serial.println(j);
j=j+1;
delay(wait);
}
