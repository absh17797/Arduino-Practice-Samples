#include<dht.h>
#include<LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);

dht ob;
const int ledPin1 =8; // for blue LED
const int ledPin2 =9; // for Green LED
const int ledPin3 =10; //for Red LED

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  lcd.begin(16,2);
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

lcd.clear();
lcd.setCursor(0,0);
lcd.print("Temp_1 :");
lcd.print(t1);


delay(5000);    //5 second delay to get the next temperature value

ob.read11(A0);
Serial.print("Temp_2 :");
Serial.print(ob.temperature);
float t2=ob.temperature;
Serial.println("");

lcd.setCursor(0,1);
lcd.print("Temp_2 :");
lcd.print(t2);


float  difference;
difference=t2-t1;

delay(2000);
lcd.clear();
lcd.setCursor(0,0);
lcd.print("Difference");
lcd.print(difference);

lcd.setCursor(0,1);

Serial.print("Difference :");
Serial.print(difference);
Serial.println("");

if(difference>0)                 //Temp is increasing.
{ 
  digitalWrite(ledPin1, HIGH);  //GREEN LIGHT
  Serial.print(" Temperature is increasing");
  lcd.print("Increasing");
}
else if(difference<0)           //Temp is increasing.
{
  digitalWrite(ledPin3, HIGH);  //RED
    Serial.print(" Temperature is decreasing");
    lcd.print("Decreasing");
}
else{                           //Temp is Constant.
  digitalWrite(ledPin2, HIGH);  //YELLOW
    Serial.print(" Temperature is Constant");
    lcd.print("Constant");
}

delay(4000);
digitalWrite(ledPin3, LOW);  //RED LIGHT
digitalWrite(ledPin1, LOW);  //BLUE 
digitalWrite(ledPin2, LOW);  //GREEN
}
