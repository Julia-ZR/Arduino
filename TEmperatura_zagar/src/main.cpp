#include <Arduino.h>
#include <Adafruit_GFX.h>
#include <DS18B20.h>
#include <TFT_ILI9163C.h>
#include <Wire.h>
#include <OneWire.h>
#include <DallasTemperature.h>
#include <math.h>
#define ONE_WIRE_BUS A2
#define YELLOW  0xFFE0  
#define	GREEN   0x07E0

using namespace std;
float a1;
 
 
float zaokraglij(float a)  {
    return round(a*100)/100;
}



TFT_ILI9163C display = TFT_ILI9163C(10,9);





OneWire oneWire(ONE_WIRE_BUS);

// Pass our oneWire reference to Dallas Temperature.
DallasTemperature sensors(&oneWire);

// Definicja wejść wyświetlacza ciekłokrystalicznego


void setup(void)
{
  // Inicjacja czujnika
sensors.begin();
  // Inicjacja wyświetlacza
display.begin();
display.clearScreen();
delay(1000);
}

void loop(void)
{
display.clearScreen();
display.setTextSize(2);
display.setCursor(50, 35);
display.setTextSize(1);
display.setTextColor(GREEN);
display.print("Temperatura:");
display.setTextSize(3);
display.setCursor(50, 50);
sensors.requestTemperatures();
display.setTextColor(YELLOW);
display.print(zaokraglij(sensors.getTempCByIndex(0)),0);
display.setCursor(90, 50);
display.cp437(true);
display.write(167);
display.setTextSize(3);
display.print("C");
delay(2000);
}
