
float  k;

float pin  = A4; 
float x;

void setup(){
  Serial.begin(9600);
pinMode(A4, INPUT);
  
}

void loop()


{
  x =  analogRead(pin);
  k = myMultiplyFunction(x); 
  Serial.println( k );

}








float myMultiplyFunction(float x )
{
  float result;
  result = x *(180/3.1416);
  return result;
}


