char sms = 0;
int i;
int k;


void setup() 

{
  
for(i=6;i<11;i++)

{
pinMode(i, OUTPUT);

}


Serial.begin(9600); 
}

void loop() 


{

 if(Serial.available() != 0)
{
  sms = Serial.read();

}



if(sms =='A')
{

  
digitalWrite(10, HIGH);  
digitalWrite(8, HIGH);  
digitalWrite(9, HIGH);  
digitalWrite(7, HIGH);  
digitalWrite(6, HIGH); 
delay(1000);
digitalWrite(10, LOW);  
digitalWrite(8, LOW);  
digitalWrite(9, LOW);  
digitalWrite(7, LOW);  
digitalWrite(6, LOW); 
delay(500);

  }




if(sms =='B')
{ 
// bailou:  
for(i=6;i<11;i++)

{
 
digitalWrite(i, HIGH);
delay(500);
digitalWrite(i, LOW);
 

}
//goto bailou;
}











if(sms =='C')
{ 
  //balout:
digitalWrite(10, HIGH);  
digitalWrite(9, HIGH); 
delay(1000);

 
digitalWrite(6, HIGH);  
digitalWrite(7, HIGH); 
 delay(1000);
 
digitalWrite(8, HIGH); 
delay(1000);

digitalWrite(10, LOW);  
digitalWrite(8, LOW);  
digitalWrite(9, LOW);  
digitalWrite(7, LOW);  
digitalWrite(6, LOW); 
//goto balout;
  }





if(sms =='D')
{
  //blout:
 digitalWrite(8, LOW);  
digitalWrite(10, HIGH);  
digitalWrite(6, HIGH);
 delay(500); 
 
digitalWrite(9, HIGH);  
digitalWrite(7, HIGH); 
digitalWrite(10, LOW); 
digitalWrite(6, LOW);
delay(500); 
 
digitalWrite(8, HIGH); 
 

digitalWrite(9, LOW);  
digitalWrite(7, LOW); 
digitalWrite(10, LOW);  
digitalWrite(6, LOW);
delay(500); 


//goto blout;

  }







if(sms =='E')
{ 
  //bout:
digitalWrite(10, HIGH);  
digitalWrite(9, HIGH);  
digitalWrite(8, HIGH); 
delay(1000);
digitalWrite(10, LOW);  
digitalWrite(9, LOW);  
digitalWrite(8, HIGH);  
digitalWrite(7, HIGH);  
digitalWrite(6, HIGH); 
delay(1000);

digitalWrite(10, LOW);  
digitalWrite(8, LOW);  
digitalWrite(9, LOW);  
digitalWrite(7, LOW);  
digitalWrite(6, LOW); 
//goto bout;
  }



if(sms =='X')
{
digitalWrite(10, LOW);  
digitalWrite(8, LOW);  
digitalWrite(9, LOW);  
digitalWrite(7, LOW);  
digitalWrite(6, LOW); 

}




   
}
