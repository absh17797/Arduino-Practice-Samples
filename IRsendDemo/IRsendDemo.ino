/*
 * IRremote: IRsendDemo - demonstrates sending IR codes with IRsend
 * An IR LED must be connected to Arduino PWM pin 3.
 * Version 0.1 July, 2009
 * Copyright 2009 Ken Shirriff
 * http://arcfn.com
 */


#include <IRremote.h>
IRsend irsend;

void setup()
{
    Serial.begin(9600);

}

void loop() {

Serial.println("------begin---");
//delay(2000);
//irsend.sendNEC(0x880092B,28);

irsend.sendNEC(0x88C0051,28); 
Serial.println("OFF bit sent");    
delay(1500); 

irsend.sendNEC(0x8800A4E,28);
Serial.println("ON bit sent");
Serial.println("1 st");
//delay(4000);
//
//irsend.sendNEC(0x8800C0C,28);
//Serial.println("2 nd");
delay(1500);
//5 second delay between each signal burst
Serial.println("---------");
}
