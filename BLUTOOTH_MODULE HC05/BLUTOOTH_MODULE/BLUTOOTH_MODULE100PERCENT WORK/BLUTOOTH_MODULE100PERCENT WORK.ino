
char sms;


void setup() 
{
 pinMode(12, OUTPUT); 
 pinMode(11, OUTPUT); 
 pinMode(10, OUTPUT); 
 pinMode(9, OUTPUT);
 pinMode(8, OUTPUT);
 Serial.begin(9600);
}

void loop() {
  
if(Serial.available() != 0)
{
  sms = Serial.read();

  }
  
  if(sms =='1') // YOUR CHOICE SMS TYPE 
{

 digitalWrite(12,HIGH); 

 
}

 
 
 if(sms =='2') // YOUR CHOICE SMS TYPE 
{

 digitalWrite(12,LOW);  // LOAD CONTROL 
 
 
}



 if(sms =='3') // YOUR CHOICE SMS TYPE 
{

 digitalWrite(11,HIGH);  // LOAD CONTROL 
 
 
}


 
 if(sms =='4') // YOUR CHOICE SMS TYPE 
{

 digitalWrite(11,LOW);  // LOAD CONTROL 
 
 
}


if(sms =='5') // YOUR CHOICE SMS TYPE 
{

 digitalWrite(10,HIGH);  // LOAD CONTROL 
 
 
}
if(sms =='6') // YOUR CHOICE SMS TYPE 
{

 digitalWrite(10,LOW);  // LOAD CONTROL 
 
 
}


if(sms =='7') // YOUR CHOICE SMS TYPE 
{

 digitalWrite(9,HIGH);  // LOAD CONTROL 
 
 
}
if(sms =='8') // YOUR CHOICE SMS TYPE 
{

 digitalWrite(9,LOW);  // LOAD CONTROL 
 
 
}
 
if(sms =='9') // YOUR CHOICE SMS TYPE 
{

 digitalWrite(8,HIGH);  // LOAD CONTROL 
 
 
}
if(sms =='A') // YOUR CHOICE SMS TYPE 
{

 digitalWrite(8,LOW);  // LOAD CONTROL 
 
 
}



}
