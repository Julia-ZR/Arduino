
//TFT 128x128 wyswietlacz RGB:
#include <Arduino.h>
#include <TFT_ILI9163C.h>
#include <Adafruit_GFX.h>
#define	RED     0xF800
#define LIME 0x0FF00   
TFT_ILI9163C display = TFT_ILI9163C(10,9); //CS i DS to numery pinów, do których podłączyliśmy wskazane sygnały. 
//Jeśli podłączyłeś wyświetlacz dokładnie jak w opisie powyżej tosą to odpowiednio 10 i 9.

void setup() {
  display.begin();
  display.setCursor(0, 2);
  display.setTextColor(RED);
  display.print("Irena Rzeczkowska:");
  display.setCursor(7, 12);
  display.setTextColor(LIME);
  display.print("Siema Zuk, co tam??");
  
}
void loop(){
}
