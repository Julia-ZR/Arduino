#include <Arduino.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <DS18B20.h>
#include <OneWire.h>
#include <LiquidCrystal.h>
#include <DallasTemperature.h>
#define LM35 A2
 
float tempMAX = 0; //Aktualna temperatura maksymalna
float tempMIN = 150; //Aktualna temperatura minimalna
 
void setup(){
  Serial.begin(9600);
}
 
void loop(){
  //Przeliczenie odczytu ADC na temperaturę zgodnie z opisem z kursu
  float temperatura = ((analogRead(LM35) * 5.0) / 1024.0) * 100;
 
  if (temperatura > tempMAX) { //Jesli aktualna temperatura jest wyzsza od maksymalnej
    tempMAX = temperatura; //to ustaw aktualną, jako maksymalną.
 
    //Wyslanie przez UART temperatury maksymalnej
    Serial.print("Nowa wartosc max: ");
    Serial.print(tempMAX);
    Serial.println("*C");
  }
 
  if (temperatura < tempMIN) { //Jesli aktualna temperatura jest niższa od minimalnej
    tempMIN = temperatura; //to ustaw aktualną, jako minimalną.
    
    //Wyslanie przez UART temperatury minimalnej
    Serial.print("Nowa wartosc min: ");
    Serial.print(tempMIN);
    Serial.println("*C");
  }
  
  delay(200);
}