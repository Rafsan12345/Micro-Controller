int input = 4;  // analog input 
int  pin = 3; // pwm output
int potenTiometer;
int meter;
void setup(){
 
  pinMode(input,INPUT); 
Serial.begin(9600); 
}

void loop(){

potenTiometer = analogRead(input);
meter = map(potenTiometer,0,1023,0,255); // map 
analogWrite(pin,meter);
Serial.println(meter);
}
