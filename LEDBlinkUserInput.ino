// program to let the user state the number of times they want to blink a LED.


int red = 9; // red led is in pin 9

//initialising wait times
int wait = 500;
int wait2 = 2000;

//User number variable and iteration variable
int usercount;
int i;

//User input display message
String msg = "Enter the number of times you want to blink the LED: ";


void setup() {
  // put your setup code here, to run once:

//Setting up LED pin and Serial monitor
pinMode(red,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  // Taking user input
Serial.println(msg);
while (Serial.available()==0){

}
usercount = Serial.parseInt();
delay(wait);

// Blinking the LED according to the number entered by user using for loop
for(i=1;i<=usercount;i++){
  digitalWrite(red,HIGH);
  delay(wait);
  digitalWrite(red,LOW);
  delay(wait);
}

delay(wait2);
}
