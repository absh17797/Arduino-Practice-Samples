#define INTERVAL 3000
#define INTERVAL2 6000
unsigned long current_time_taken;
unsigned long current_time_taken_1;
unsigned long prev_time_taken=0;
unsigned long prev_time_taken_2=0;

void setup() {
 // put your setup code here, to run once:
 Serial.begin(9600);
 pinMode(13,OUTPUT);
}

void loop() 
{


Serial.println("--PROGRAM START--");

for(int j=1;j<=5;j++){
Serial.println("----OUTER LOOP");
current_time_taken_1 = millis();
Serial.println(current_time_taken_1);
 for(int i=1;i<=j;i++)
 { current_time_taken = millis();
 
   Serial.println(current_time_taken);
   Serial.println(prev_time_taken);
   Serial.println(current_time_taken - prev_time_taken);
   Serial.println(INTERVAL);
   
   Serial.println("--------INNER FOR LOOP");
    if(current_time_taken - prev_time_taken >= INTERVAL){
    digitalWrite(13, HIGH);
   Serial.println("---------------IF CONDITION");
    prev_time_taken = millis();
    } 
    else {
   digitalWrite(13, LOW);  
   Serial.println("----------------ELSE CONDITION");
   
   }
 }
if(current_time_taken_1 - prev_time_taken_2 >= INTERVAL2){
  digitalWrite(13,LOW);
  prev_time_taken_2 = millis();
  Serial.println("----------------WHILE CONDITION");
  }
else{
  digitalWrite(13,LOW);
  }  
}
}
