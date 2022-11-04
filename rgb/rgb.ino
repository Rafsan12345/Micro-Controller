int  output = 3;
int i;
int k;

void setup() {
 pinMode(3, OUTPUT);
 

}

void loop() {
 
for(i=0;i<255;i=i+25)
{
analogWrite( 3 , i);
delay(80);

}
 
 
 for(k=5;k>0;k=k-25)
{
analogWrite(3,k );
delay(80);
}

}
