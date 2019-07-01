The Description and Functionality-
-----------------------------------------------------------------------------------------------------------------------------------------------------------------
#include <LiquidCrystal.h>		//Including headerfile for LCD			
#include <dht.h>			//Including headerfile or Including libraries for DHT sensor 

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);	// Initializing th pin configurationof our LCD(12,11  are the transmit and reciever pins and 2,3,4,5 are the data pins.)
int Pin = A0;				//Assigning value of analog pin to variable "Pin".
dht Ob;					//Creating Object for our sensor libraries.

void setup()
{
 lcd.begin(16,2); 			// Describing the Resolution of LCD i.e. 16 by 2 character display.
}

void loop()
{
 Ob.read11(Pin);			// Reading the analog pin A0.
 lcd.setCursor(0,0);			// Settting up the cursor in LCD.
 lcd.print("Humidity: ");		//Print on LCD.
 lcd.print(Ob.humidity);		//Call and Print the Pre-defined variable "humidity" from the "dht" library. 
 lcd.setCursor(0,1);			// Settting up the cursor in LCD.
 lcd.print("Temp: ");			//Print on LCD.
 lcd.print(Ob.temperature);		//Call and Print the Pre-defined variable "temperature" from the "dht" library.
 lcd.print(" C");
}

-----------------------------------------------------------------------------------------------------------------------------------------------------------------
Sensor name- DHT 11.
Library name- DHT
------------------------------------------------------------------------------------------------------------------------------------------------------------------
Output:
Humidity: 53.00%
Temp: 27.00 C
------------------------------------------------------------------------------------------------------------------------------------------------------------------
