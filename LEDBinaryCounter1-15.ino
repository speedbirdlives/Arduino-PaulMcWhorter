//program to count 1-15 in binary using 4 LEDs in on/off configs.


int LED1 = 2;
int LED2 = 3;
int LED3 = 4;
int LED4 = 5;

int wait = 3000;



void setup() {
  // put your setup code here, to run once:

pinMode(LED1,OUTPUT);
pinMode(LED2,OUTPUT);
pinMode(LED3,OUTPUT);
pinMode(LED4,OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly:

digitalWrite(LED1,LOW);
digitalWrite(LED2,LOW);
digitalWrite(LED3,LOW);
digitalWrite(LED4,LOW);
delay(wait);



digitalWrite(LED1,LOW);
digitalWrite(LED2,LOW);
digitalWrite(LED3,LOW);
digitalWrite(LED4,HIGH);
delay(wait);




digitalWrite(LED1,LOW);
digitalWrite(LED2,LOW);
digitalWrite(LED3,HIGH);
digitalWrite(LED4,LOW);
delay(wait);




digitalWrite(LED1,LOW);
digitalWrite(LED2,LOW);
digitalWrite(LED3,HIGH);
digitalWrite(LED4,HIGH);
delay(wait);




digitalWrite(LED1,LOW);
digitalWrite(LED2,HIGH);
digitalWrite(LED3,LOW);
digitalWrite(LED4,LOW);
delay(wait);




digitalWrite(LED1,LOW);
digitalWrite(LED2,HIGH);
digitalWrite(LED3,LOW);
digitalWrite(LED4,HIGH);
delay(wait);


digitalWrite(LED1,LOW);
digitalWrite(LED2,HIGH);
digitalWrite(LED3,HIGH);
digitalWrite(LED4,LOW);
delay(wait);



digitalWrite(LED1,LOW);
digitalWrite(LED2,HIGH);
digitalWrite(LED3,HIGH);
digitalWrite(LED4,HIGH);
delay(wait);




digitalWrite(LED1,HIGH);
digitalWrite(LED2,LOW);
digitalWrite(LED3,LOW);
digitalWrite(LED4,LOW);
delay(wait);




digitalWrite(LED1,HIGH);
digitalWrite(LED2,LOW);
digitalWrite(LED3,LOW);
digitalWrite(LED4,HIGH);
delay(wait);



digitalWrite(LED1,HIGH);
digitalWrite(LED2,LOW);
digitalWrite(LED3,HIGH);
digitalWrite(LED4,LOW);
delay(wait);




digitalWrite(LED1,HIGH);
digitalWrite(LED2,LOW);
digitalWrite(LED3,HIGH);
digitalWrite(LED4,HIGH);
delay(wait);



digitalWrite(LED1,HIGH);
digitalWrite(LED2,HIGH);
digitalWrite(LED3,LOW);
digitalWrite(LED4,LOW);
delay(wait);




digitalWrite(LED1,HIGH);
digitalWrite(LED2,HIGH);
digitalWrite(LED3,LOW);
digitalWrite(LED4,HIGH);
delay(wait);



digitalWrite(LED1,HIGH);
digitalWrite(LED2,HIGH);
digitalWrite(LED3,HIGH);
digitalWrite(LED4,LOW);
delay(wait);




digitalWrite(LED1,HIGH);
digitalWrite(LED2,HIGH);
digitalWrite(LED3,HIGH);
digitalWrite(LED4,HIGH);
delay(wait);

}
