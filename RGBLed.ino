//Simple program to demonstrate RGB LED.
//We are using a common cathode RGB LED here.


// Defining pins for each of the three anode terminals.
int red = 8;
int green = 9;
int blue = 10;

int wait = 2000;

//User input and variable for color requirement
String ask = "Enter what color you want based on the legend: ";
int color;


void setup() {
  // put your setup code here, to run once:
  //Setting up serial monitor and LED pins.
Serial.begin(9600);
pinMode(red,OUTPUT);
pinMode(green,OUTPUT);
pinMode(blue,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  //Generic user input for the color.
Serial.println("1.red");
Serial.println("2.green");
Serial.println("3.blue");
Serial.println(ask);
  
while(Serial.available()==0){

}
color = Serial.parseInt(); //user enters an integer

  //Red color
if(color == 1){
  digitalWrite(red,HIGH);
  digitalWrite(green,LOW);
  digitalWrite(blue,LOW);
}

  //Green color
if(color == 2){
  digitalWrite(red,LOW);
  digitalWrite(green,HIGH);
  digitalWrite(blue,LOW);
}

  //Blue color
if(color == 3){
  digitalWrite(red,LOW);
  digitalWrite(green,LOW);
  digitalWrite(blue,HIGH);
}

  //delay between two main loops
delay(wait);
}
