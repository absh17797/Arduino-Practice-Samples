-----------------------------------------------------------------------------------------------------------
The description 
-----------------------------------------------------------------------------------------------------------
A program to blink LED in a particular order(in ascending order i.e. 1-2-3-4..) in between a particular 
delay time.

-----------------------------------------------------------------------------------------------------------
Functionality
-----------------------------------------------------------------------------------------------------------

const int ledPin =  LED_BUILTIN;	// Declared a constant variable for the number of the LED pin
int ledState = LOW;             	// ledState used to set the LED
unsigned long previousMillis = 0;	// will store last time LED was updated
unsigned long previousMillis_2 = 0;
const long interval = 1000;      	// interval at which to blink (milliseconds)
unsigned long i=0;
void setup() {
  Serial.begin(960);
  pinMode(ledPin, OUTPUT);		//Set built-in LED as output pin
}

void loop() {
unsigned long currentMillis = millis();
 if(currentMillis-previousMillis>=interval){	// to blink the LED
    previousMillis = currentMillis;		// Save the last time you blinked the LED
    ledState = !(ledState); 			// inverse the state of LED 
    Serial.println(ledState);			//either 0 or 1
    digitalWrite(ledPin, ledState);		//set state of LED
    print_time(previousMillis);
  } //if
  	
  
 
  if(currentMillis-previousMillis_2>=interval*i){ // to make a delay after particular interval
     previousMillis_2 = currentMillis;		  // Save the last time we made a delay	
     ledState = 0; 				  // made LED state LOW
     Serial.println(ledState);
     Serial.println("delay");
     digitalWrite(ledPin, ledState);
     print_time(previousMillis);
     i=i+2;
         }
} //loop

void print_time(unsigned long time_millis){	 // a user defined function  to print time in seconds
    Serial.print("Time: ");
    Serial.print(time_millis/1000);
    Serial.print("s - ");
}

-----------------------------------------------------------------------------------------------------------
Output:
-----------------------------------------------------------------------------------------------------------
The LED blinks as
1 time
then delay of 1 sec.
2 times
then delay of 1 sec.
3 time
then delay of 1 sec.
.
.
.
and so on.
-----------------------------------------------------------------------------------------------------------
No sensor andlibraries were used.
-----------------------------------------------------------------------------------------------------------

