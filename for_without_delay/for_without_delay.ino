const int ledPin =  LED_BUILTIN;        // the number of the LED pin
int ledState = LOW;                     // ledState used to set the LED
unsigned long previousMillis = 0;       // will store last time LED was updated
const long interval = 1000; 
// interval at which to blink (milliseconds)

void setup() {
Serial.begin(9600);
pinMode(ledPin, OUTPUT);
}

void loop() {
  
  unsigned long currentMillis = millis();
  Serial.println("------ initialize");
  
  for (int i=0;i<5;i++)
  {
  if (currentMillis - previousMillis >= interval) {
   previousMillis = currentMillis;
   ledState = HIGH;
          
     Serial.println(currentMillis);
     
     digitalWrite(ledPin, ledState);  
  }
  else{
    ledState=LOW;
    }
  Serial.println("- for loop");
  }
  Serial.println("----------- END ");
  
  
  
  
}
