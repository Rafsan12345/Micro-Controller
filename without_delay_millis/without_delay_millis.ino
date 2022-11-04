unsigned long currentTime = 0;
unsigned long previousTime = 0;

boolean state1 = 1;


void setup() {
 pinMode(12, OUTPUT); 
Serial.begin(9600); 
}

void loop() {
  
currentTime = millis();


if(currentTime - previousTime >= 1000)
{

digitalWrite(12, state1); 
  state1 = !state1;
  previousTime = currentTime;

}
  



 

}
