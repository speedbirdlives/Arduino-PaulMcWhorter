// Program to demonstrate String user input using Serial Monitor.

//Initialising variables
String myName;
String msg = "What is your Name? ";
String msg2 = "Hello ";
String msg3 = "Welcome to Arduino!";

int wait = 1000;

void setup() {
  // put your setup code here, to run once:

  //Setting up serial monitor
Serial.begin(57600);
}

void loop() {
  // put your main code here, to run repeatedly:

  //Using standard user input procedure.
Serial.println(msg);
while(Serial.available()==0){

}
myName = Serial.readString(); //Parsing string from user input.

  //Displaying messages as follows.
Serial.print(msg);
Serial.print(myName);
Serial.println(msg2);

delay(wait);
}
