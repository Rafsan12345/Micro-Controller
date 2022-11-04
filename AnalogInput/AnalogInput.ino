
   int analogPin = A4;   
   int Pin = 0; 


void setup() {
   pinMode(10, OUTPUT);
   pinMode(9, OUTPUT);
   pinMode(8, OUTPUT);
   pinMode(analogPin, INPUT);
   Serial.begin(9600);
}

void loop() {
  
  Pin = analogRead(analogPin);


  
  switch (Pin) {
  case 100:
    digitalWrite(8,LOW);
    digitalWrite(10,HIGH);
   break;

  case 500:
    digitalWrite(10,LOW);
    digitalWrite(9,HIGH);
    digitalWrite(8,LOW);
    break;

  /* default:
    digitalWrite(9,LOW);
    digitalWrite(10,LOW);
    digitalWrite(8,HIGH);
    break;
    */
}

  
  Serial.println(Pin);
  
}
