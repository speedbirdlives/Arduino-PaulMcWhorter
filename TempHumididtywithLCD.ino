#include <LiquidCrystal_I2C.h>
#include <DHT.h>
#include <Wire.h>
#define Type DHT11

int sensePin = 2;
DHT sensor(sensePin,Type);

LiquidCrystal_I2C display(0x27,20,4);

float TempC;
float TempF;
float Humidity;





void setup() {
  // put your setup code here, to run once:
sensor.begin();
display.init();
display.backlight();
}

void loop() {
  // put your main code here, to run repeatedly:

  TempC = sensor.readTemperature();
  TempF = sensor.readTemperature(true);
  Humidity = sensor.readHumidity();

  display.setCursor(0,0);
  display.print("Celsius ");
  display.setCursor(9,0);
  display.print(TempC);
  display.setCursor(0,1);
  display.print("Fahrenheit ");
  display.setCursor(12,1);
  display.print(TempF);
  display.setCursor(0,2);
  display.print("%Humidity ");
  display.setCursor(11,2);
  display.print(Humidity);

delay(5000);
display.clear();
delay(1000);

}
