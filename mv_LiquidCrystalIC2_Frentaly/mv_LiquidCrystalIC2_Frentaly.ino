
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
 
LiquidCrystal_I2C lcd(0x27,16,2);  // set the LCD address to 0x27 for a 16 chars and 2 line display




void setup() {

  lcd.init();                      // initialize the lcd 
 
  // Print a message to the LCD.
  lcd.backlight();
 // lcd.setCursor(0,1);
  lcd.print("Hello World");

}

void loop() {
  // put your main code here, to run repeatedly:
 //lcd.print("Test Display I2C");
  lcd.setCursor(0,2);
  lcd.print("MVVersion 1.0");
}
