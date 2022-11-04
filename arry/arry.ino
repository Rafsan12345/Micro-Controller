

int pattern[]={3,5,6,8};
int i;

int k;


void setup() 

{
  
for(i=0;i<4;i++)

{
pinMode(pattern[i], OUTPUT);

}

}

void loop() 


{

 
for(k=0;k<4;k++)
{
  
  digitalWrite(pattern[k], HIGH);   
  delay(1000);
digitalWrite(pattern[k],LOW); 
  
  delay(1000);
  }






}
