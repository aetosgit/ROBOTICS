#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// Create LCD object with I2C address 0x27 and size 16x2
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  lcd.init();        // Initialize LCD
  lcd.backlight();   // Turn on backlight

  lcd.setCursor(0, 0);
  lcd.print("Hello, Student!");

  lcd.setCursor(0, 1);
  lcd.print("LCD + I2C Works!");
}

void loop() {
  // Nothing needed here
}