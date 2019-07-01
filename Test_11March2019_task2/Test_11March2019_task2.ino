#include<dht.h>
dht ob;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

ob.read11(A0);
Serial.print("Temp_1 :");
Serial.print(ob.temperature);
float t1=ob.temperature;
delay(5000);

ob.read11(A0);
Serial.print("Temp_2 :");
Serial.print(ob.temperature);
float t2=ob.temperature;
delay(2000);

float  difference;
difference=t2-t1;
Serial.print("Difference :");
Serial.print(difference);

}
