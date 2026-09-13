//program to count 0-15 in binary using 4 LEDs in on/off configs.


int LED1 = 2;
int LED2 = 3;
int LED3 = 4;
int LED4 = 5;

int wait = 3000;



void setup() {
  // put your setup code here, to run once:

  // configuring all the four LED pins to mode=output.
pinMode(LED1,OUTPUT);
pinMode(LED2,OUTPUT);
pinMode(LED3,OUTPUT);
pinMode(LED4,OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly:

  
// Decimal=0 Binary=0000
digitalWrite(LED1,LOW);
digitalWrite(LED2,LOW);
digitalWrite(LED3,LOW);
digitalWrite(LED4,LOW);
delay(wait);


// Decimal=1 Binary=0001
digitalWrite(LED1,LOW);
digitalWrite(LED2,LOW);
digitalWrite(LED3,LOW);
digitalWrite(LED4,HIGH);
delay(wait);



// Decimal=2 Binary=0010
digitalWrite(LED1,LOW);
digitalWrite(LED2,LOW);
digitalWrite(LED3,HIGH);
digitalWrite(LED4,LOW);
delay(wait);



// Decimal=3 Binary=0011
digitalWrite(LED1,LOW);
digitalWrite(LED2,LOW);
digitalWrite(LED3,HIGH);
digitalWrite(LED4,HIGH);
delay(wait);



//Decimal =4 Binary=0100
digitalWrite(LED1,LOW);
digitalWrite(LED2,HIGH);
digitalWrite(LED3,LOW);
digitalWrite(LED4,LOW);
delay(wait);



//Decimal=5 Binary=0101
digitalWrite(LED1,LOW);
digitalWrite(LED2,HIGH);
digitalWrite(LED3,LOW);
digitalWrite(LED4,HIGH);
delay(wait);


  // Decimal=6 Binary=0110
digitalWrite(LED1,LOW);
digitalWrite(LED2,HIGH);
digitalWrite(LED3,HIGH);
digitalWrite(LED4,LOW);
delay(wait);


// Decimal=7 BInary=0111
digitalWrite(LED1,LOW);
digitalWrite(LED2,HIGH);
digitalWrite(LED3,HIGH);
digitalWrite(LED4,HIGH);
delay(wait);



//Decimal=8 BInary=1000
digitalWrite(LED1,HIGH);
digitalWrite(LED2,LOW);
digitalWrite(LED3,LOW);
digitalWrite(LED4,LOW);
delay(wait);



//Decimal=9 Binary=1001
digitalWrite(LED1,HIGH);
digitalWrite(LED2,LOW);
digitalWrite(LED3,LOW);
digitalWrite(LED4,HIGH);
delay(wait);


//Decimal=10 Binary=1010
digitalWrite(LED1,HIGH);
digitalWrite(LED2,LOW);
digitalWrite(LED3,HIGH);
digitalWrite(LED4,LOW);
delay(wait);



//Decimal=11 Binary=1011
digitalWrite(LED1,HIGH);
digitalWrite(LED2,LOW);
digitalWrite(LED3,HIGH);
digitalWrite(LED4,HIGH);
delay(wait);


//Decimal=12 Binary=1100
digitalWrite(LED1,HIGH);
digitalWrite(LED2,HIGH);
digitalWrite(LED3,LOW);
digitalWrite(LED4,LOW);
delay(wait);



// Decimal=13 BInary=1101
digitalWrite(LED1,HIGH);
digitalWrite(LED2,HIGH);
digitalWrite(LED3,LOW);
digitalWrite(LED4,HIGH);
delay(wait);


//Decimal=14 Binary=1110
digitalWrite(LED1,HIGH);
digitalWrite(LED2,HIGH);
digitalWrite(LED3,HIGH);
digitalWrite(LED4,LOW);
delay(wait);



//Decimal=15 Binary=1111
digitalWrite(LED1,HIGH);
digitalWrite(LED2,HIGH);
digitalWrite(LED3,HIGH);
digitalWrite(LED4,HIGH);
delay(wait);

}
