int input = 4; 
  int  vvvv;
int potenTiometer;

void setup(){
 
  pinMode(input,INPUT); 
Serial.begin(9600); 
}

void loop(){

potenTiometer = analogRead(input);
vvvv = constrain(potenTiometer,500,600);

Serial.println(vvvv);
}
