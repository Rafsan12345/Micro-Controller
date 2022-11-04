char sms;


void setup() {
 pinMode(12, OUTPUT); 
 pinMode(11, OUTPUT); 

Serial.begin(9600); 

}

void loop() {
if(Serial.available() != 0)
{
  sms = Serial.read();
}


if(sms == 'A')
{

digitalWrite(12,HIGH);  

}

if(sms =='B')
{

digitalWrite(12,LOW);  

}
if(sms =='C')
{

digitalWrite(11,HIGH);  

}

if(sms =='D')
{

digitalWrite(11,LOW);  

}



}
