 // 1D ARRAY 
 int pattern[]={10,7,4,11};
 int k,i;
 
 void setup() {

  
for(k=0;k<4;k++)
{
pinMode(pattern[k], OUTPUT);

}
  
 Serial.begin(9600);
}

 void loop() {


 
 for(i=0;i<4;i++)
{
  
digitalWrite(pattern[i], HIGH );
delay(500 );
digitalWrite(pattern[i], LOW );
}
 
  
  
    
    
    
    
    
    //Serial.println("Frequency is = " );
    //Serial.println(cv );
    //delay(100 );

 
}







 
