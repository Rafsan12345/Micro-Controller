int H = 6; 
int M = 5;
int L = 4;



void setup() {
 pinMode(H,INPUT);
 pinMode(M,INPUT);
 pinMode(L,INPUT); 
 pinMode(7,OUTPUT);
 
 Serial.begin(9600);
 
}

void loop() {



int A1  = digitalRead(H);
int A2 = digitalRead(M);
int A3   = digitalRead(L);




if ( A1 == HIGH) 
{
 
 MMMM: 
 
digitalWrite(7,HIGH);
delay(10);
digitalWrite(7,LOW);
delay(10);
goto MMMM;
}



if ( A2 == HIGH) 
{
  
  delay(5);
  hhhhh:
digitalWrite(7,HIGH);
delay(10);
digitalWrite(7,LOW);
delay(10);
 goto hhhhh;
}


if ( A3 == HIGH) 
{

  
 delay(8);
 vvvv:
digitalWrite(7,HIGH);
delay(10);
digitalWrite(7,LOW);
delay(10);
 goto vvvv;
}


  
}
