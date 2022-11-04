#include <IRremote.h>

int RECV_PIN = 7;
IRrecv irrecv(RECV_PIN);
decode_results results;

 



void setup()
{
  Serial.begin(9600);
  irrecv.enableIRIn(); // Start the receiver
  
  pinMode(6,OUTPUT); // RESET PIN
  pinMode(9,OUTPUT); //HIGH RED
  pinMode(8,OUTPUT); // MID BLUE
  pinMode(10,OUTPUT); // LOW YEOLLOW
  
  digitalWrite(6,HIGH);
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
  
  
  
}











void loop() {
 
    
  
  if (irrecv.decode(&results)) {
    Serial.println(results.value, HEX);    
    irrecv.resume(); // Receive the next value
  












    
    if (results.value == 0x38863BE0)
    
    {
   //Serial.print('A');
   digitalWrite(6,LOW);
   digitalWrite(8,LOW);
   digitalWrite(9,LOW);
   digitalWrite(10,LOW);
   delay(1000);
   digitalWrite(6,HIGH);
   digitalWrite(8,HIGH);
   Serial.print('A');
   
   }
    


    
    if (results.value == 0x38863BD0)
    
     {
      
     digitalWrite(6,LOW);
     digitalWrite(8,LOW);
     digitalWrite(9,LOW);
     digitalWrite(10,LOW);
     delay(1);
     digitalWrite(6,HIGH);
     Serial.print('B');
     digitalWrite(9,HIGH);
}
    
 if (results.value == 0x38863BF0)
    
     {
      
     digitalWrite(6,LOW);
     digitalWrite(8,LOW);
     digitalWrite(9,LOW);
     digitalWrite(10,LOW);
     delay(1);
     digitalWrite(6,HIGH);
     Serial.print('C');
     digitalWrite(10,HIGH);
}  

    
 if (results.value == 0x38863BD2
)
    
    { 
    
     
     digitalWrite(6,LOW);
     digitalWrite(8,LOW);
     digitalWrite(9,LOW);
     digitalWrite(10,LOW);
     delay(1);
     digitalWrite(6,HIGH);
     
    }













   

  
  
  }
  


  
}
