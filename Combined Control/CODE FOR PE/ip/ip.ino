#include <IRremote.h>

int RECV_PIN = 7;
IRrecv irrecv(RECV_PIN);
decode_results results;

 



void setup()
{
  Serial.begin(9600);
  irrecv.enableIRIn(); // Start the receiver
  pinMode(2,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(10,OUTPUT);
  
  digitalWrite(6,HIGH);
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);

  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  
}











void loop() {
 
    
  
  if (irrecv.decode(&results)) {
    Serial.println(results.value, HEX);    
    irrecv.resume(); // Receive the next value
  












    
    if (results.value == 0x38863BE0)
    
    {
   digitalWrite(4,LOW);   
   digitalWrite(3,LOW);   
   digitalWrite(2,LOW);
   digitalWrite(6,LOW);
   digitalWrite(8,LOW);
   digitalWrite(9,LOW);
   digitalWrite(10,LOW);
   delay(10);
   digitalWrite(6,HIGH);
   digitalWrite(4,HIGH);
   digitalWrite(8,HIGH);
   
   }
    


    
    if (results.value == 0x38863BD0)
    
     {
     digitalWrite(3,LOW);
     digitalWrite(2,LOW);
     digitalWrite(4,LOW); 
     digitalWrite(6,LOW);
     digitalWrite(8,LOW);
     digitalWrite(9,LOW);
     digitalWrite(10,LOW);
     delay(10);
     digitalWrite(6,HIGH);
     digitalWrite(3,HIGH);
     digitalWrite(9,HIGH);
}
    
 if (results.value == 0x38863BF0)
    
     {
      digitalWrite(2,LOW);
     digitalWrite(4,LOW);
     digitalWrite(3,LOW); 
     digitalWrite(6,LOW);
     digitalWrite(8,LOW);
     digitalWrite(9,LOW);
     digitalWrite(10,LOW);
     delay(10);
     digitalWrite(6,HIGH);
     digitalWrite(2,HIGH);
     digitalWrite(10,HIGH);
}  

    
 if (results.value == 0x38863BD2
)
    
    { 
    
     digitalWrite(2,LOW);
     digitalWrite(4,LOW);
     digitalWrite(3,LOW); 
     digitalWrite(6,LOW);
     digitalWrite(8,LOW);
     digitalWrite(9,LOW);
     digitalWrite(10,LOW);
     delay(1);
     digitalWrite(6,HIGH);
     
    }













   

  
  
  }
  


  
}
