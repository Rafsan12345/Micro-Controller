
 void setup() {
 pinMode(6, OUTPUT);
 pinMode(7, OUTPUT);
 
 pinMode(3, INPUT);
 pinMode(11, INPUT);
  Serial.begin(9600);
  digitalWrite(7,HIGH); 
  digitalWrite(6,HIGH); 
}

 void loop() {

 int yu = analogRead(3);
 int vf = map(yu,0,1023,40,100);
 int bn = constrain(vf,40,100);
  tone(10,bn);

 
  unsigned long duration; 
  duration = pulseIn(11, HIGH);
  


    float vvvv = 1000;
    float ccc =  (duration/vvvv );
 
    float cm = 1/(ccc*2);
    int  cv = (cm*1000) ;
  
    Serial.println("Frequency is = " );
    Serial.println( cv );
    delay(100 );




 if (55<cv) 
{
 
  Serial.println( "OVER Frequency" );
  
  digitalWrite(7,LOW);
}
   else if(48>cv)
{

  Serial.println( "UNDER Frequency" );
 
   digitalWrite(6,LOW); 
  }

else 
{

  Serial.println( "Stable Condition" );
  
  digitalWrite(6,HIGH); 
  digitalWrite(7,HIGH); 
  }






    

 
}
