int blutooth;
int iot;
int gsm;
int remote;


void setup() {
  
 pinMode(12, OUTPUT); 
 pinMode(10, INPUT); 
 pinMode(9, INPUT); 
 pinMode(8, INPUT); 
 pinMode(7, INPUT); 
Serial.begin(9600);

}

void loop() {

 blutooth = digitalRead(10);
 iot=      digitalRead(9);
 gsm =      digitalRead(8);
 remote =   digitalRead(7);


if (blutooth == HIGH || iot == HIGH || gsm == HIGH || remote == HIGH) 
{ 



   digitalWrite(12,LOW);

}

else 
{

digitalWrite(12,HIGH); 
//delay(1000);

}







  

}
