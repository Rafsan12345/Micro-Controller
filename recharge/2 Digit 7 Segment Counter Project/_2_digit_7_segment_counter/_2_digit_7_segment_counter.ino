
float k,rrr,yyy;


void setup() {
  Serial.begin(9600);
 pinMode(10, OUTPUT);
pinMode(5, INPUT);
}

void loop() {
  
for(k=0;k<=255;k++)
{

 analogWrite(10,k);
    
}
     
 rrr = analogRead(5);
 yyy = map(rrr,0,1023,0,255);
    Serial.println(yyy);
    
    
  
 
}

  
