
const int load = 8;


void setup() {

  pinMode(load, OUTPUT);
  
  Serial.begin(9600);
  
}

void loop() {

  if (Serial.available() > 0) {
      char comdata = char(Serial.read());
      
    if (comdata == 'R') {
      Serial.println("Load is ON");
      digitalWrite(load, HIGH);
    }
  if (comdata == 'N') {
     Serial.println("Load is OFF");
      digitalWrite(load, LOW);
    }


    
  }  
}
