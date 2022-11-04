

int sms;

void setup() {
 
 pinMode(7,OUTPUT);
 
 Serial.begin(9600);
 
}

void loop() {

if(Serial.available() != 0)
{
  sms = Serial.read();
}

//Serial.print(sms);




if ( sms == 'A') 
{
 //Serial.print("high");
 MMMM: 
 
digitalWrite(7,HIGH);
delay(10);
digitalWrite(7,LOW);
delay(10);
goto MMMM;
}



if ( sms == 'B') 
{
  //Serial.print("mid");
  delay(5);
  hhhhh:
digitalWrite(7,HIGH);
delay(10);
digitalWrite(7,LOW);
delay(10);
 goto hhhhh;
}


if ( sms == 'C') 
{

 //Serial.print("low"); 
 delay(8);
 vvvv:
digitalWrite(7,HIGH);
delay(10);
digitalWrite(7,LOW);
delay(10);
 goto vvvv;
}


  
}
