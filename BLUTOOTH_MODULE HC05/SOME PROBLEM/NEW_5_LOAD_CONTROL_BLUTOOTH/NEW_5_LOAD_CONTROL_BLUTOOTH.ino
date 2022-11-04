
const int LED1  = 12;
const int LED2 = 11;
const int LED3 = 10;
const int LED4 = 8;
const int LED5 = 9;


void setup() {

  pinMode(LED1 , OUTPUT);
  pinMode(LED2 , OUTPUT);
  pinMode(LED3 , OUTPUT);
  pinMode(LED4 , OUTPUT);
  pinMode(LED5 , OUTPUT);
 Serial.begin(9600);

  
  
}

void loop() {

  if (Serial.available() > 0) {
      char comdata = char(Serial.read());
      
    if (comdata == 'R') {
      
      digitalWrite(LED1 , HIGH);
    }
  if (comdata == 'N') {
    
      digitalWrite(LED1 , LOW);
    }

if (comdata == 'C') {
      
      digitalWrite(LED4 , HIGH);
    }


    if (comdata == 'E') {
      
      digitalWrite(LED5 , HIGH);
    }




    
    else if (comdata == 'G' ) {
      
      digitalWrite(LED2 , HIGH);
    }
    
    else if (comdata == 'L' ) {
      
      digitalWrite(LED2 , LOW);
    }


    
    else if (comdata == 'B') {
      
      digitalWrite(LED3 , HIGH);
    }

   else if (comdata == 'V') {
      
      digitalWrite(LED3 , LOW);
    } 

 

 

   if (comdata == 'D') {
      
      digitalWrite(LED4 , LOW);
    } 
  
 

     if (comdata == 'F') {
      
      digitalWrite(LED5 , LOW);
    } 

    
    else if (comdata == '9') {
      Serial.println("all LED is turn ON");
      digitalWrite(LED1, HIGH);
      digitalWrite(LED2, HIGH);
      digitalWrite(LED3, HIGH);
      digitalWrite(LED4, HIGH);
      digitalWrite(LED5, HIGH);
      
    }
    else if (comdata == 'X') {
      Serial.println("all LED is turn OFF");
     digitalWrite(LED1, LOW);
      digitalWrite(LED2, LOW);
      digitalWrite(LED3, LOW);
      digitalWrite(LED4, LOW);
      digitalWrite(LED5, LOW);
    }
  }
}
