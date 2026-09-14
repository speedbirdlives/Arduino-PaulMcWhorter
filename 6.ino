#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 20, 4);

int num1;
int num2;
int ans;
int op;

void setup() {

  lcd.init();
  lcd.backlight();

  Serial.begin(9600);

  // Ask for first number
  lcd.setCursor(0, 0);
  lcd.print("Enter first number:");

  while (Serial.available() == 0) {
  }

  num1 = Serial.parseInt();

  while (Serial.available() > 0) {
    Serial.read();
  }

  lcd.clear();

  // Ask for second number
  lcd.setCursor(0, 0);
  lcd.print("Enter second");
  lcd.setCursor(0, 1);
  lcd.print("number:");

  while (Serial.available() == 0) {
  }

  num2 = Serial.parseInt();

  while (Serial.available() > 0) {
    Serial.read();
  }

  lcd.clear();

  // Ask for operator
  lcd.setCursor(0, 0);
  lcd.print("Choose operator:");

  lcd.setCursor(0, 1);
  lcd.print("1 = Addition");

  lcd.setCursor(0, 2);
  lcd.print("2 = Subtraction");

  lcd.setCursor(0, 3);
  lcd.print("3 = Multiplication");

  // Division doesn't fit, so we'll enter it through Serial
  Serial.println("1 = Addition");
  Serial.println("2 = Subtraction");
  Serial.println("3 = Multiplication");
  Serial.println("4 = Division");

  while (Serial.available() == 0) {
  }

  op = Serial.parseInt();

  while (Serial.available() > 0) {
    Serial.read();
  }

  lcd.clear();

  // Perform calculation
  if (op == 1) {

    ans = num1 + num2;

    lcd.setCursor(0, 0);
    lcd.print("Answer = ");
    lcd.print(ans);

  }

  else if (op == 2) {

    ans = num1 - num2;

    lcd.setCursor(0, 0);
    lcd.print("Answer = ");
    lcd.print(ans);

  }

  else if (op == 3) {

    ans = num1 * num2;

    lcd.setCursor(0, 0);
    lcd.print("Answer = ");
    lcd.print(ans);

  }

  else if (op == 4) {

    if (num2 == 0) {

      lcd.setCursor(0, 0);
      lcd.print("Error!");

      lcd.setCursor(0, 1);
      lcd.print("Cannot divide by 0");

    }

    else {

      ans = num1 / num2;

      lcd.setCursor(0, 0);
      lcd.print("Answer = ");
      lcd.print(ans);

    }
  }

  else {

    lcd.setCursor(0, 0);
    lcd.print("Invalid operator");

  }
}

void loop() {
}