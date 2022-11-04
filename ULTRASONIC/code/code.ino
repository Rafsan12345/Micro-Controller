
const int trigPin = 12;
const int echoPin = 11;

float duration;
float distance;


void setup() 
{
pinMode(trigPin, OUTPUT); 
pinMode(echoPin, INPUT); 
Serial.begin(9600); 
}



void loop() {

digitalWrite(trigPin, HIGH);
delayMicroseconds(10);

digitalWrite(trigPin, LOW);

duration = pulseIn(echoPin, HIGH);

distance= duration*0.034/2;

Serial.print("Distance from the object = ");
Serial.print(distance);
Serial.println(" cm");
delay(100);
}
