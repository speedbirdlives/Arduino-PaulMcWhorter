//Program which uses a LCD display with temperature humidity sensor to display the stats(temp and humid).

//include necessary packages
#include <LiquidCrystal_I2C.h>
#include <DHT.h>
#include <Wire.h>

//define DHT11 sensor type
#define Type DHT11

//initialising the sensor
int sensePin = 2;
DHT sensor(sensePin,Type);

//initialising the LCD display
LiquidCrystal_I2C display(0x27,20,4);

//required variables for the stats
float TempC;
float TempF;
float Humidity;



void setup() {
  // put your setup code here, to run once:

//setting up the sensor and display
sensor.begin();
display.init();
display.backlight();
}

void loop() {
  // put your main code here, to run repeatedly:

  //reading the temperatures and humidity
  TempC = sensor.readTemperature();
  TempF = sensor.readTemperature(true);
  Humidity = sensor.readHumidity();

  //printing the values on the display
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


delay(5000); //displays for 5s
display.clear(); //clears the display
delay(1000); //waits 1s
//displays again

}
