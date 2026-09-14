#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 20, 4);

void setup() {
  lcd.init();
  lcd.backlight();

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
}