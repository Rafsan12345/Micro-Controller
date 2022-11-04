int input = 4; 
int ldr; 

void setup(){
 
pinMode(input,INPUT); 
pinMode(12, OUTPUT); // LED OUTPUT 
Serial.begin(9600); 
}

void loop(){
ldr = analogRead(input);
Serial.println(ldr);


if(ldr >= 5 )
{

digitalWrite(12, LOW);   

}





else 
{

digitalWrite(12, HIGH);   


}


}
