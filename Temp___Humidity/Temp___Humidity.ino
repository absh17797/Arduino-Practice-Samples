#include <LiquidCrystal.h>
#include <dht.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int Pin = A0;
dht Ob;

void setup()
{
 lcd.begin(16,2); //16 by 2 character display
}

void loop()
{
 Ob.read11(Pin);
 lcd.setCursor(0,0);
 lcd.print("Humidity: ");
 lcd.print(Ob.humidity);
 lcd.setCursor(0,1);
 lcd.print("Temp: ");
 lcd.print(Ob.temperature);
}
