#include<dht.h>
dht ob;
const int ledPin1 =8; // for blue LED
const int ledPin2 =9; // for Green LED
const int ledPin3 =10; //for Red LED

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
  pinMode(ledPin1, OUTPUT); //blue LED
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

ob.read11(A0);
Serial.println("");
Serial.print("Temp_1 :");
Serial.print(ob.temperature);
float t1=ob.temperature;
Serial.println("");

delay(5000);    //5 second delay to get the next temperature value

ob.read11(A0);
Serial.print("Temp_2 :");
Serial.print(ob.temperature);
float t2=ob.temperature;
Serial.println("");

float  difference;
difference=t2-t1;
Serial.print("Difference :");
Serial.print(difference);
Serial.println("");

if(difference>0)                 //Temp is increasing.
{ 
  digitalWrite(ledPin3, HIGH);  //RED LIGHT
  Serial.print(" Temperature is increasing");
}
else if(difference<0)           //Temp is increasing.
{
  digitalWrite(ledPin1, HIGH);  //BLUE 
    Serial.print(" Temperature is decreasing");
}
else{                           //Temp is Constant.
  digitalWrite(ledPin2, HIGH);  //GREEN
    Serial.print(" Temperature is Constant");
}
delay(4000);
digitalWrite(ledPin3, LOW);  //RED LIGHT
digitalWrite(ledPin1, LOW);  //BLUE 
digitalWrite(ledPin2, LOW);  //GREEN
}
