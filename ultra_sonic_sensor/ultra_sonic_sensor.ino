int trigpin = 3;
int echopin = 2;
float duration,cm,distance;


void setup() 
{
   pinMode(trigpin, OUTPUT);
   pinMode(echopin, INPUT);
  Serial.begin(9600);
}


void loop() 
{
 
  digitalWrite(trigpin, HIGH);
  delayMicroseconds(10);   
  digitalWrite(trigpin,LOW); 
  duration = pulseIn(echopin,HIGH);
  cm = (duration/58.82);
  distance = cm ; 
  Serial.println("Distance =");
  Serial.println(distance);
  Serial.println("CM");
}
