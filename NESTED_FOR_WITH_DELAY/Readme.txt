-------------------------------------------------------------------------------------------------------
The description and functionality:
-------------------------------------------------------------------------------------------------------
A program to make a LED blink a particular times(ascending order) and after a particular delay 
in between, with delay().

-------------------------------------------------------------------------------------------------------
Functionality:
-------------------------------------------------------------------------------------------------------

void setup() {
Serial.begin(9600);			//Serial begin with baud-rate 9600  to display output on console
pinMode(13,OUTPUT);			//Set Pin 13 as Output pin
}

void loop() {
Serial.println("--PROGRAM START--");	
for(int j=1;j<=3;j++){			//FOR loop
Serial.println("--OUTER LOOP");
 	
for(int i=1;i<=j;i++){			//Nested FOR loop
Serial.println("-----INNER FOR LOOP");
digitalWrite(13, HIGH);			//Set LED Pin as HIGH
delay(500);	
digitalWrite(13, LOW);
delay(500);
Serial.println("-----ELSE CONDITION");
    }					//nested-for-loop
delay(1000);  				//Delay of 1 sec after execution of nested-for-loop 
 }					//Outer for loop
}

--------------------------------------------------------------------------------------------------------
Console Output:
--------------------------------------------------------------------------------------------------------
--PROGRAM START-- 
--OUTER LOOP 
-----INNER FOR LOOP 
--OUTER LOOP 
-----INNER FOR LOOP 
-----INNER FOR LOOP 
--OUTER LOOP 
-----INNER FOR LOOP 
-----INNER FOR LOOP 
-----INNER FOR LOOP

-------------------------------------------------------------------------------------------------------
 
Components : LED connected to pin 13
