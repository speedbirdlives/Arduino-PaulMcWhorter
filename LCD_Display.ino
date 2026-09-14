//Program to demonstrate the use of a LCD Display with I2C module.

//include required packages
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

//defining the LCD display (20x4)
LiquidCrystal_I2C lcd(0x27, 20, 4);


void setup() {
  //setup code - runs once

  //initialising lcd display and turning on backlight
  lcd.init();
  lcd.backlight();

  
//set cursor and print commands
  lcd.setCursor(0, 0);
  lcd.print("");

  lcd.setCursor(0,1);
  lcd.print("Loser");

  lcd.setCursor(0,2);
  lcd.print("-Tame Impala");

  lcd.setCursor(0,3);
  lcd.print("");


}

void loop() {
  //put code here to run repeatedly.
  //void loop() is currently empty.
}
