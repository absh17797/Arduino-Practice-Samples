//// defines arduino pins numbers
//const int trigPin = 6;
//const int echoPin = 5;
//
//// defines variables
//long duration;
//float distance;
// #define ledPin 3  //red
// #define ledPin 4  //yellow
// #define ledPin 5  //green
//
//void setup()
//{
//  pinMode(trigPin, OUTPUT);
//// Sets the trigPin as an Output
//
//  pinMode(echoPin, INPUT);
//// Sets the echoPin as an Input
//
//  Serial.begin(9600);
//  }
//
//void loop()
//{
//  // Clears the trigPin
//    digitalWrite(trigPin, LOW);
//    delayMicroseconds(2);
//  // Sets the trigPin on HIGH state for 10 micro seconds
//    digitalWrite(trigPin, HIGH);
//    delayMicroseconds(10);
// 
//    digitalWrite(trigPin, LOW);
//  // Reads the echoPin, returns the sound wave travel time in microseconds
// 
//  duration = pulseIn(echoPin, HIGH);
// 
//  // Calculating the distance
//  distance= duration*0.0343/2;
// 
//  // Prints the distance on the Serial Monitor
//  Serial.print("Distance from the object = ");
//  Serial.print(distance);
//  Serial.println(" cm");
// 
// if(distance>=15)
//  {
//  digitalWrite(5,HIGH);
//  digitalWrite(3,LOW);
//  digitalWrite(4,LOW);
//  }
//
//  if(distance>6 && distance<15){
//  digitalWrite(4,HIGH);
//  digitalWrite(5,LOW);
//  }
// 
//  if(distance<=6 ){
//  digitalWrite(3,HIGH);
//  digitalWrite(4,LOW);
//  digitalWrite(5,LOW);
//  }
//  else{
//  digitalWrite(3,LOW);
//  }
//
//float percent = (distance/60)*100;
//Serial.print(percent);
//Serial.println(" %" );
//
//delay(1000);
//}

#define trigger 7
#define echo 8
float time=0,distance=0;
void setup()
{
 pinMode(trigger,OUTPUT);
 pinMode(echo,INPUT);
 delay(2000);
 Serial.begin(9600);
}
 
void loop()
{
 digitalWrite(trigger,LOW);
 delayMicroseconds(2);
 digitalWrite(trigger,HIGH);
 delayMicroseconds(10);
 digitalWrite(trigger,LOW);
 delayMicroseconds(2);
 time=pulseIn(echo,HIGH);
 distance=time*340/20000;

 Serial.print("Distance:");
 Serial.print(distance);
 Serial.println("cm");
 
 Serial.print("Distance:");
 Serial.print(distance/100);
 Serial.println("m");
 delay(1000);
}
