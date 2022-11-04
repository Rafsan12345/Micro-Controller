  char sms;
  char nnc = 'ACD';
  char npc = 'EFGPH';
  char nob = 'IJKUL';
  char nlg = 'MNOFP';

  
void setup() {
 pinMode(12, OUTPUT); 
 pinMode(11, OUTPUT); 

Serial.begin(9600); 
Serial.println("Wellcome to Password Based Automation Project");
Serial.println("Create By MD HASEMI RAFSAN JANI SHOHAN");
}

void loop() {
if(Serial.available() != 0)
{
  sms = Serial.read();
  
}


if(sms == nnc )
{

digitalWrite(12,HIGH);  
Serial.println("Yes Password Matching Load 1 is ON Now");
delay(100);
}

if(sms == npc)
{

digitalWrite(12,LOW);  
Serial.println("Yes Password Matching Load 1 is OFF Now");
delay(100);
}
if(sms == nob)
{

digitalWrite(11,HIGH);  
Serial.println("Yes Password Matching Load 2 is ON Now");
delay(100);
}

if(sms == nlg)
{

digitalWrite(11,LOW);  
Serial.println("Yes Password Matching Load 2 is OFF Now");
delay(100);
}



}
