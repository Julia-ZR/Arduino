//TFT 128x128 wyswietlacz RGB:
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

TFT_ILI9163C display = TFT_ILI9163C(10,9); //CS i DS to numery pinów, do których podłączyliśmy wskazane sygnały. 
//Jeśli podłączyłeś wyświetlacz dokładnie jak w opisie powyżej tosą to odpowiednio 10 i 9.

void setup() {
  display.begin();
  display.fillScreen(BLACK);
  display.setTextSize(2);
  display.setTextColor(GREEN);
  display.setCursor(57,20);
  display.print("12");
  display.setCursor(62,97);
  display.print("6");
  display.setCursor(22,61);
  display.print("9");
  display.setCursor(102,61);
  display.print("3");
  display.drawPixel(67,65,GREEN);
  display.drawCircle(67,65,60.5,YELLOW);
  display.drawCircle(67,65,56.5,MAGENTA);
  display.drawCircle(67,65,57.5,RED);
  display.drawCircle(67,65,58.5,RED);
  display.drawCircle(67,65,59.5,RED);
  display.drawFastVLine(67,115,7,BLUE);
  display.drawFastVLine(67,10,7,BLUE);
  display.setRotation(1);
  display.drawFastVLine(67,113,7,BLUE);
  display.drawFastVLine(67,9,7,BLUE);
  ///display.drawTriangle(40,40,40,40,40,40,BLACK);
  
}
void loop(){
///display.drawTriangle(40,40,40,40,40,40,BLACK);
///delay(80);
///display.fillScreen(GREEN);
///delay(80);
///display.fillScreen(CYAN);
///delay(80);
///display.fillScreen(RED);
///delay(80);
}
