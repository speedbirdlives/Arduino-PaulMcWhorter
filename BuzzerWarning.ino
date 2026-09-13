//Simple program to demonstrate an Active buzzer.
//If the natural number entered by the user is above 10, the buzzer will beep.

int myNum; //user entered number
int Buzpin = 6; //Buzzer pin
int wait = 1000;

//Strings as necessary
String ask = "Enter a natural number: "; 
String warning = "Your number is above 10.";


void setup() {
  // put your setup code here, to run once:

  //Setting up serial monitor and buzzer pin
Serial.begin(9600);
pinMode(Buzpin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  //User input for an integer
Serial.println(ask);
while(Serial.available()==0){

}
myNum = Serial.parseInt(); //Parsing user input 

  //logic
if (myNum>10)
{
  Serial.println(warning); //Warning message
  
  //One buzzer beep
  digitalWrite(Buzpin,HIGH);
  delay(wait);
  digitalWrite(Buzpin,LOW);
}

else{
  digitalWrite(Buzpin,LOW);
}


delay(wait);
}
