#include <DHT.h>
#define Type DHT11

int sensePin = 2;

DHT sensor(sensePin,Type);

int setupTime = 500;

float tempC;
float tempF;
float humid;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
sensor.begin();
delay(setupTime);

}

void loop() {
  // put your main code here, to run repeatedly:
humid = sensor.readHumidity();
tempC = sensor.readTemperature();
tempF = sensor.readTemperature(true);

Serial.println(humid);
Serial.println(tempC);
Serial.println(tempF);
Serial.println(" ");

delay(2000);
}
