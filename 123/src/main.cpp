#include <Arduino.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x3F,16,2);// set the LCD address to Ox27 fora16 chars and2line display
                    

/**
 * The function `lcd.init()` initializes the LCD display
 */
void setup()
{
  lcd.init();
  /* It turns on the backlight of the LCD display. */
  lcd.backlight();
  /* It sets the cursor to the first column of the second row. */
  lcd.setCursor(0,1);
  lcd.print("Byki <3");
  lcd.setCursor(1,0);
  lcd.print("Temperatura:");
}
void loop(){
}
