#include <IRremote.h>

int RECV_PIN = 2;
IRrecv irrecv(RECV_PIN);
decode_results results;

int state1=1;


void setup()
{
  Serial.begin(9600);
  irrecv.enableIRIn(); 
  pinMode(10,OUTPUT);
  
}

void loop() {
  if (irrecv.decode(&results)) {
    Serial.println(results.value, HEX);    
    irrecv.resume(); 
  
    
    if(results.value != 0)
    {
     digitalWrite(10,state1);
     state1 = !state1; 
    }
  }

}
