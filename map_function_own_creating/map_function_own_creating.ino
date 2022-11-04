float value;
void setup() 
{
 

 Serial.begin(9600); 

}

void loop() {

 value = tan(1.0472);
Serial.println(value);

}
