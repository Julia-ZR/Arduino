#include <Arduino.h>
#include <TFT_ILI9163C.h>
#include <Adafruit_GFX.h>
#include <SPI.h>
#define	RED     0xF800
#define BLUE 0x003153   
#define YELLOW 0xffff00
#define CYAN 0x07E0
#define GREEN 0x07FF
#define MAGENTA 0xF81F

TFT_ILI9163C display = TFT_ILI9163C(10,9);

void setup() {
display.begin();
display.setCursor(25,20);
display.setTextSize(3);
display.setTextColor(YELLOW);
display.print("12:09");


}
.
void loop() {

}