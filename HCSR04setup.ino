//Program to understand how to use a HCSR04 Ultrasonic sensor.

//declaring required pin variables
int trigPin = 11;
int echoPin = 12;

int buzzPin = 7; //Active buzzer

float pingTravelTime; //ping Travel Time

void setup() {

  //setting up pins
  
  pinMode(trigPin, OUTPUT); //sends ultrasonic wave
  pinMode(echoPin, INPUT); //captures ultrasonic wave
  
  pinMode(buzzPin, OUTPUT); //Active buzzer

  //Setting up serial monitor
  Serial.begin(9600);
}

void loop() {

  // Send ultrasonic pulse
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);

  digitalWrite(trigPin, LOW);

  // Measure echo time
  pingTravelTime = pulseIn(echoPin, HIGH);

  Serial.println(pingTravelTime);

  //logic
  //Buzzer buzzes if object is too near
  if (pingTravelTime <= 350.0 && pingTravelTime > 0) {
    digitalWrite(buzzPin, HIGH);
  }
  else {
    digitalWrite(buzzPin, LOW);
  }

  delay(25);
}
