#include <IRremote.h>

int RECV_PIN = 2;
IRrecv irrecv(RECV_PIN);
decode_results results;



int seconds;
int  decrise;
int sensorValue;
int value = 0 ;

void setup()
{
  Serial.begin(9600);
  irrecv.enableIRIn(); // Start the receiver
  pinMode(5,OUTPUT);
  
}

void loop() {
  if (irrecv.decode(&results)) {
    Serial.println(results.value, HEX);    
    irrecv.resume(); // Receive the next value
  
    
    if(results.value == 0x38863BF2)
    {
       value = (value + 50);

       sensorValue = constrain(value, 0, 255);
      
      Serial.println(sensorValue);    
      analogWrite(5,sensorValue);

      
     
    }
    
 

if(results.value == 0x38863BFA)
    {

    value = (value - 50);
    int  sensor = constrain(value, 0, 255);
    Serial.print(sensor);
    analogWrite(5,sensor);
      
      
     
    }









    
  }
}
