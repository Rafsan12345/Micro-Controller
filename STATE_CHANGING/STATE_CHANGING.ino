//#include<EEPROM.h>
byte value;

int STATE1 = HIGH;
char sms;


void setup() {
 pinMode(12, OUTPUT); 

Serial.begin(9600); 

}

void loop() {
if(Serial.available() != 0)
{
  sms = Serial.read();
}


if(sms =='A')
{

digitalWrite(12,STATE1);  
//EEPROM.write('vari',STATE1);
STATE1 = !STATE1;
}

}
