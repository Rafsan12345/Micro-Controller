


int pattern[]={3,5,6,8};
int patter[]={11,10,9,4};

int k;
int i;
int o;
int l;

void setup() 
{
 for(k=0;k<4;k++) 
  {
pinMode(pattern[k], OUTPUT);
}
  
  
  
 for(l=0;l<4;l++) 
  {
pinMode(patter[l], OUTPUT);
} 
  
  
  
  
}



void loop() 


{
  
  for(i=0;i<4;i++)  
  {  
digitalWrite(pattern[i], HIGH); 
 delay(1000); 

digitalWrite(pattern[i], LOW); 
 delay(1000);
  }


  
  
  
  
  for(o=0;o<4;o++)  
  {  
digitalWrite(patter[o], HIGH); 
 delay(1000); 

digitalWrite(patter[o], LOW); 
 delay(1000);
  }


}
