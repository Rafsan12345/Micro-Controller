#include<EEPROM.h>
byte value1= LOW;
byte value2 = LOW;
char sms;
int state1 = HIGH;
int state2 = HIGH;


void setup() {
 pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  Serial.begin(9600);
}

void loop() {

  
 if(Serial.available() != 0)
{
sms = Serial.read(); 

if(sms =='A')
{
digitalWrite(12, state1);   
EEPROM.write('L1',state1);
state1 = !state1;
}

if(sms =='B')
{
digitalWrite(11, state2);   
EEPROM.write('L2',state2);
state2 = !state2;
}
}

else 
{
value1 = EEPROM.read('L1');
digitalWrite(12, value1);   
value2 = EEPROM.read('L2');
digitalWrite(11, value2); 
}








}
