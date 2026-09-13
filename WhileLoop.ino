//Simple program to demonstrate while loop using Arduino.

//Iteration variable etc.
int i;
int wait = 500;




void setup() {
  // put your setup code here, to run once:

  //Setting up serial monitor.
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  //Basic while loop to print 1-10
  i=1;
while(i<=10){
  Serial.println(i);
  i++;
  delay(wait);
}

Serial.println(" ");//Space between two main iterations(void loop)
}
