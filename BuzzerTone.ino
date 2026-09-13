//Simple program to generate a kind of beeping tone in a Buzzer.

//Initialising variables

int buzzpin = 8; //Buzzer pin
int wait1 = 100; //1st beep delay
int wait2 = 200; //2nd beep delay

//Counter variables
int i;
int j;



void setup() {
  // put your setup code here, to run once:

  //Buzzer Pin setup
pinMode(buzzpin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  // For 100 iterations, we have two sets of beeps
for(i=1;i<=100;i++){

//Beep 1
  digitalWrite(buzzpin,HIGH);
  delay(wait1);
  digitalWrite(buzzpin,LOW);
  delay(wait1);

//Beep 2
  digitalWrite(buzzpin,HIGH);
  delay(wait2);
  digitalWrite(buzzpin,LOW);
  delay(wait2);



}

}
