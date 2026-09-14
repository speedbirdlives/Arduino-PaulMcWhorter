//Program to demonstrate the usage of the DHT11 Temperature and Humidity sensor.

//including DHT package
#include <DHT.h>

//define the sensor type as DHT11
#define Type DHT11

//Sensor to  digital pin~
int sensePin = 2;

//Sensor parameters and definition
DHT sensor(sensePin,Type);

//Sensor setup time
int setupTime = 500;

//Output variables
float tempC;
float tempF;
float humid;

void setup() {
  // put your setup code here, to run once:
//Setting up serial monitor
Serial.begin(9600);

//Sensor initialisation
sensor.begin();
delay(setupTime); //Sensor needs some time delay for initialisation

}

void loop() {
  // put your main code here, to run repeatedly:

//reading temperatures and humidity.
humid = sensor.readHumidity();
tempC = sensor.readTemperature();
tempF = sensor.readTemperature(true);

//printing temperatures and humidity
Serial.println(humid);
Serial.println(tempC);
Serial.println(tempF);
Serial.println(" ");

delay(2000);
}
