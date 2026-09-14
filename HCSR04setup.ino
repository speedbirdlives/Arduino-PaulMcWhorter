int trigPin = 11;
int echoPin = 12;
int buzzPin = 7;

float pingTravelTime;

void setup() {

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buzzPin, OUTPUT);

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

  if (pingTravelTime <= 350.0 && pingTravelTime > 0) {
    digitalWrite(buzzPin, HIGH);
  }
  else {
    digitalWrite(buzzPin, LOW);
  }

  delay(25);
}