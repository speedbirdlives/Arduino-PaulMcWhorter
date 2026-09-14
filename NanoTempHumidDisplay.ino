#include <DHT.h>
#define Type DHT11

#include <LiquidCrystal_I2C.h>
#include <Wire.h>

int sensePin = 3;

LiquidCrystal_I2C display(0x27, 20, 4);
DHT sensor(sensePin,Type);


float tempC;
float humidity;
float tempF;



void setup() {
  // put your setup code here, to run once:
  sensor.begin();
  display.init();
  display.backlight();
}

void loop() {
  // put your main code here, to run repeatedly:
  humidity = sensor.readHumidity();
  tempF = sensor.readTemperature(true);
  tempC = sensor.readTemperature();

  display.setCursor(0,0);
  display.print("FRI 21 AUG");

  display.setCursor(0,1);
  display.print("Celsius: ");
  display.setCursor(10,1);
  display.print(tempC);

  display.setCursor(0,2);
  display.print("Fahrenheit: ");
  display.setCursor(12,2);
  display.print(tempF);

  display.setCursor(0,3);
  display.print("Humidity%: ");
  display.setCursor(11,3);
  display.print(humidity);

  delay(5000);

  display.clear();
  delay(1000);
}
