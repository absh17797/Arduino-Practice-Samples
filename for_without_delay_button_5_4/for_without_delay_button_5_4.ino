const int buttonPin = 2;     // the number of the pushbutton pin
const int ledPin =  13;      // the number of the LED pin

// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status
int ledState = LOW;                     // ledState used to set the LED
unsigned long previousMillis = 0;       // will store last time LED was updated
const long interval = 300;             // interval at which to blink (milliseconds)


void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
}



void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);
  unsigned long currentMillis = millis();

  
 
  
  if (buttonState == HIGH) {
    // turn LED on:
      
  if (currentMillis - previousMillis >= interval) {
    previousMillis = currentMillis;
    for(int i=0;i<5;i++)
    {
      digitalWrite(ledPin, ledState);
    }
  }
  }

  
  
}
