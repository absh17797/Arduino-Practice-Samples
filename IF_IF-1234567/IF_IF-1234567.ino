const int ledPin =  LED_BUILTIN;// the number of the LED pin
int ledState = LOW;             // ledState used to set the LED
unsigned long previousMillis = 0;// will store last time LED was updated
unsigned long previousMillis_2 = 0;
const long interval = 1000;       // interval at which to blink (milliseconds)
unsigned long i=0;
void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  unsigned long currentMillis = millis();

  
    if (currentMillis - previousMillis >= interval) {
    previousMillis = currentMillis;                  //last time LED blinked 
    ledState = !(ledState); 
  Serial.println(ledState);
    digitalWrite(ledPin, ledState);
    print_time(previousMillis);
    } //if
    
  
 
    if (currentMillis - previousMillis_2 >= interval*i) {
    previousMillis_2 = currentMillis;
    ledState = 0; 
  Serial.println(ledState);
      Serial.println("delay");
    digitalWrite(ledPin, ledState);
    print_time(previousMillis);
   i=i+2;
      // i++;
    }
}
void print_time(unsigned long time_millis){
    Serial.print("Time: ");
    Serial.print(time_millis/1000);
    Serial.print("s - ");
}
