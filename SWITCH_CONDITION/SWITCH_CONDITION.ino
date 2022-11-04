
   int analogPin = A4;   
   int Pin = 0; 


void setup() {
 
   pinMode(analogPin, INPUT);
   Serial.begin(9600);
}

void loop() {
 
 for (int x = 0; x <= 100; x ++) 
 {
  if (x == 50) { 

    Serial.println("comand exicude");
    delay(500);
    continue;
    //break;
  } 

Serial.println(x);


}  
}
