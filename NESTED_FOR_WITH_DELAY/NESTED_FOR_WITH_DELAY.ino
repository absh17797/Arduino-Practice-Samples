void setup() {
 Serial.begin(9600);
 pinMode(13,OUTPUT);
}

void loop() 
{
Serial.println("--PROGRAM START--");


for(int j=1;j<=3;j++){
Serial.println("----OUTER LOOP");
 for(int i=1;i<=j;i++)
 {
   Serial.println("--------INNER FOR LOOP");
    digitalWrite(13, HIGH);
    delay(500);
   digitalWrite(13, LOW);
    delay(500);
   Serial.println("----------------ELSE CONDITION");
    }
  delay(1000);  
 }
}
