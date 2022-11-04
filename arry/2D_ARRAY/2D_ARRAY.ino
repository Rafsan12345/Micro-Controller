 // 1D ARRAY 

 
 //int pattern[]={10,7,4,11};


int digit[16][4]={
{0,0,0,0},//0
{0,0,0,1},//1
{0,0,1,0},//2 
{0,0,1,1},//3
{0,1,0,0},//4 
{0,1,0,1},//5
{0,1,1,0},//6
{0,1,1,1},//7
{1,0,0,0},//8
{1,0,0,1}, // 9
{1,0,1,0}, // 10 
{1,0,1,1}, // 11
{1,1,0,0}, // 12 
{1,1,0,1}, // 13 
{1,1,1,0}, // 14
{1,1,1,1}, //15

};





 
 int k,i,l;
 
 void setup() {

  
for(k=0;k<4;k++)
{
pinMode(k+1, OUTPUT);

}
  
 //Serial.begin(9600);
}

 void loop() {








//delay (500);
for(i=0;i<17;i++)
{
  
 for(l=0;l<4;l++)
 {        

  digitalWrite(l+1,digit[i][l]);
   
  
  }
   
 delay (500);
 }
                 
    
  //delay (100);  
    
    
    //Serial.println("Frequency is = " );
    //Serial.println(cv );
    //delay(100 );

 
}







 
