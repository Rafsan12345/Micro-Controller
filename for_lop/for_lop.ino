
int i;

int k;


void setup() 

{
  
for(i=3;i<9;i++)

{
pinMode(i, OUTPUT);

}

}

void loop() 


{

 
for(k=3;k<9;k++)
{
  
  digitalWrite(k, HIGH);   
  delay(200);
digitalWrite(k,LOW); 
  
  delay(200);
  }






}
