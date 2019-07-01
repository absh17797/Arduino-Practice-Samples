#include <LiquidCrystal.h>

LiquidCrystal lcd(2,3,10,11,12,13);
int varval=1;

int B3status=0;
void setup()
{ 
lcd.begin(16,2);
  Serial.begin(9600);
  pinMode(5, INPUT);
  pinMode(6, INPUT);
  pinMode(7, INPUT);

}

void loop()
{
Serial.println("Menu");
Serial.println("Variable");
lcd.setCursor(0,0);
lcd.print("MENU");
lcd.setCursor(1,1);
lcd.print("Variable 1"); 
  
if(digitalRead(5) == HIGH)
  {delay(50);
  lcd.clear();
  lcd.setCursor(1,1);
  lcd.print("Variable 1");
  
  }
  
  
if(digitalRead(6) == HIGH)
  { delay(50);
    lcd.clear();
    lcd.setCursor(0,0);
  lcd.print("MENU");
    lcd.setCursor(0,1);
  lcd.print("Variable 2");
    delay(50);
  //Serial.println("Variable 2");
  } 
  
  if(digitalRead(7) == HIGH)
  {
   delay(50);
   B3status=1;
   lcd.clear();
   lcd.setCursor(0,0);
   lcd.print("Variable value");
//     Serial.print("Variable value");
   lcd.setCursor(0,1);
   lcd.print(varval);
//    Serial.print(varval);
   while(B3status = 1)
   {
   if(digitalRead(5) == HIGH)
   {
   delay(50);
   varval = varval + 1;
   varval = constrain(varval,0,5); 
   lcd.setCursor(0,1);
   lcd.print(varval);
//   Serial.print(varval);
   }
   
   if(digitalRead(6) == HIGH)
   {delay(50);
   varval = varval - 1;
   varval = constrain(varval,0,5); 
   lcd.setCursor(0,1);
   lcd.print(varval);
//   Serial.print(varval);
   }
   
   if(digitalRead(7) == HIGH)
   {delay(50);
   lcd.clear();
   lcd.setCursor(0,0);
   lcd.print("Value of var");
   lcd.setCursor(0,1);
   lcd.print(varval);
// Serial.print(varval); 
   B3status=0;
   }
  } //while
 
  }

Serial.println("PROGRAM ENDS");
}
