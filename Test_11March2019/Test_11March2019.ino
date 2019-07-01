#include <dht.h>                    // calling a dht library
dht ob;                             //creating an object for this dht library thus we can call the member functions of the library.

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  
ob.read11(2);                    // read11() is a predefined function to read the pin(A0) with which the sensor is attached.

Serial.print("TEmperature :");
Serial.println(ob.temperature);     //temperature is a predefined variable in which the tempearture in degree celsius is stored
Serial.print("C"); 

Serial.println("");

Serial.print("Humid :");
Serial.println(ob.humidity);        //humidity is a predefined variable in the dht library
Serial.print(" %");
}
