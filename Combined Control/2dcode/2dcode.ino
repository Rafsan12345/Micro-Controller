void setup() {
  pinMode(5,OUTPUT);
  pinMode(4,INPUT); //HIGH
  pinMode(3,INPUT);//MIDIUM
  pinMode(2,INPUT); //LOW
  Serial.begin(9600);
}


void loop() {

 int High = digitalRead(4);
 int Low = digitalRead(2);
 int Midium = digitalRead(3);

 if (High == HIGH)
    {
     
    TOOO:
   Serial.print(1);
   digitalWrite(5,HIGH);
   delay(1);
   digitalWrite(5,LOW);
   delay(1);
   goto TOOO;
   
   }

 if (Low == HIGH)
    {
     
    ckck:

    Serial.print(2);
   digitalWrite(5,HIGH);
   delay(2);
   digitalWrite(5,LOW);
   delay(2);
   goto ckck;
   
   }
 
if (Midium == HIGH)
    {
     
    jkjk:
    Serial.print(3);
   digitalWrite(5,HIGH);
   delay(4);
   digitalWrite(5,LOW);
   delay(4);
   goto jkjk;
   
   }
  

}
