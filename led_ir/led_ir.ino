// IR Transmitter ....

#include <IRremote.h>

IRsend irsend;

int RECV_PIN = 11;
IRrecv irrecv(RECV_PIN);
decode_results results;

void setup()
{
  Serial.begin(9600);
  Serial.println("Enabling IRin");
  irrecv.enableIRIn(); // Start the receiver
  Serial.println("Enabled IRin");
}
void loop() {

irsend.sendSony(0x8800347, 28);
delay(10);


if (irrecv.decode(&results)) {
    Serial.println(results.value, HEX);     //To show the data in hexadecimal             
    irrecv.resume(); // Receive the next value
}
delay(100);

}
