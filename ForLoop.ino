// program to blink Red led 3 times and Yellow led 5 times using for loop.

// red led at pin 9 and yellow led at pin 6
int red = 9;
int yel = 6;

// blink delay times and gap between red and yellow led
int waitR = 1000;
int waitY = 1000;
int gap = 2000;

// no of times both leds blink
int YBlink = 3;
int RBlink = 5;


//looping variables
int j;
int k;

void setup() {
  // put your setup code here, to run once:

  //Setting up LED pins and Serial monitor
  
pinMode(red,OUTPUT);
pinMode(yel,OUTPUT);

Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

  // Blinking yellow led
for (j=1;j<=YBlink;j++)
{
  digitalWrite(yel,HIGH);
  delay(waitY);
  digitalWrite(yel,LOW);
  delay(waitY);

  Serial.println(j); //Also prints the blink number
  

}

  
// gap between two leds
Serial.println(" ");
delay(gap);


  
// blinking the red LED
for(k=1;k<=RBlink;k++){
  digitalWrite(red,HIGH);
  delay(waitR);
  digitalWrite(red,LOW);
  delay(waitR);

  Serial.println(k); //Also prints the LED number
  

}

  
// gap between the two leds and next main loop(void loop)
Serial.println(" ");
delay(gap);

}
