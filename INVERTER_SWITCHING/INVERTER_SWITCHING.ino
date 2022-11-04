// INVERTER SWITCHING CODE 
// DESING BY MD HASEMI RAFSAN JANI SHOHAN 
// MOB 01784032597

 int ledPin = 10;


          

void setup() {
  
  pinMode(ledPin, OUTPUT);
 
  pinMode(11, INPUT);
  Serial.begin(9600); 


  
}

void loop() {
  
   digitalWrite(ledPin,LOW);
   delay (10); //  FOR 50 HZ FREQUENCY  delay (100); 
   digitalWrite(ledPin,HIGH);
   delay (10); // FOR 50 HZ FREQUENCY  delay (100); 
   
   
  
     
  }
