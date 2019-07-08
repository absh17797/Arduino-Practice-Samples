#include <IRremote.h>           //Library for IR Remote
IRsend irsend;
int sensor1 = 4;
int sensor2 = 7;
int sensor3 = 8;  

void setup() 
{
  Serial.begin(9600);
  pinMode(sensor1, INPUT);
  pinMode(sensor2, INPUT);
  pinMode(sensor3, INPUT);

}
void loop()
{

  if(digitalRead(sensor1) == HIGH)  
  { 
  delay(1000);  
  Serial.println("PIR 1 is HIGH");
  }
   if(digitalRead(sensor2) == HIGH)  
  {
  delay(1000); 
  Serial.println("PIR 2 is HIGH");
  }
   if(digitalRead(sensor3) == HIGH)
  {
  delay(1000);   
  Serial.println("PIR 3 is HIGH");
  }
}
