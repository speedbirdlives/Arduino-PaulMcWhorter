// Program where we are using analog pins to read analog signals.

//Initialising variables

int read = A0; //Analog pin A0
int readVal=0; //Analog reading
float volt = 0; //Voltage
int wait = 1000;


void setup() {
  // put your setup code here, to run once:

  // Setting up mode and serial monitor
pinMode(read,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  
readVal = analogRead(read); // Using analogRead command
volt = (5./1023.)*readVal; //Converting analogsignal(0-1023) to voltage(0V-5V)
Serial.println(volt); //printing voltage
delay(wait);
}
