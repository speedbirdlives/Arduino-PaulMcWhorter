//program for a counter using for loop.
//Board = Arduino UNO R3

//Initailising looping variables
int i;
int j;
int wait = 500;


void setup() {
  // put your setup code here, to run once:

  //Serial monitor setup
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  //Using for loop to print 1-10
for(j=1;j<=10;j++){
  Serial.println(j);
  delay(wait);
}
Serial.println(" "); // Seperating the main iterations(void loop)
}
