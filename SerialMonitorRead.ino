// Program to use Serial monitor to take integer input from the user.


//initialising variables
int num;
int wait = 2000;
String msg = "Enter the number: ";
String msg2 = "Your number is: ";
void setup() {
  // put your setup code here, to run once:

  //Setting up serial monitor
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  //waiting for the user to enter the number using while loop.
  //Basically, while the serial monitor is empty, there is an empty infinite loop until the serial monitor gets some data.
  
Serial.println(msg); //Enter the number
while(Serial.available()==0){

}
  
num = Serial.parseInt(); //Parsing integer from user input.
  
Serial.print(msg2); //Your number is..
Serial.println(num); //Printing the user entered number.
delay(wait);
}
