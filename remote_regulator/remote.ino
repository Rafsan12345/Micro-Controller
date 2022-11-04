#include <IRremote.h>
int n =0;
int bb =0;
int Val;
int RECV_PIN = 2;
IRrecv irrecv(RECV_PIN);
decode_results results;


int state1=1;
int state2=1;
int state3=1;
int state4=1;
int state5=1;

int led1=8;
int led2=9; // regulator
int led3=10;
int led4=11;
int led5=12;

void setup()
{
  Serial.begin(9600);
  irrecv.enableIRIn(); // Start the receiver
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT); 
  pinMode(led4,OUTPUT);
  pinMode(led5,OUTPUT);  
}

void loop() {
//38863BE0 1
//38863BD0  2
//38863BF0 3
//38863BC8  4
//38863BF2 up
//38863BFA dwn

 
   
  if (irrecv.decode(&results)) {
    Serial.println(results.value, HEX);    
    irrecv.resume(); // Receive the next value
 
    // led 1
    if(results.value == 0x38863BE0)// light on off perpose 
    {
     digitalWrite(led1,state1);
     state1 = !state1; 
    }
   // led 3

    if(results.value == 0x38863BD0)
    {
     digitalWrite(led3,state2);
     state2 = !state2; 
    }
    // led4 
if(results.value == 0x38863BF0)// light on off perpose 
    {
     digitalWrite(led4,state4);
     state4 = !state4; 
    }
// led 5
if(results.value == 0x38863BC8)// light on off perpose 
    {
     digitalWrite(led5,state5);
     state5 = !state5; 
    }


/// regulator
     if (results.value == 0x38863BF2) // up 
    {
     
    int  Val = bb;
    int cpx =  Val + 50;
    int sensorValue = map(cpx, 0 , 255 , 0, 255);
    int Value = constrain(sensorValue, 0, 255);
    analogWrite(led2,Value);
    bb = Value;
   
    
    }

    
     if(results.value == 0x38863BFA) // down
    {

      
    int  cv = bb - 50;
    int sensor = map(cv, 0, 255 , 0, 255);
    int lue = constrain(sensor, 0, 255);
    analogWrite(led2,lue);
     bb = lue ;
     //Val = bb;
     Serial.print(Val); 
    }
   
   
   
  } 

}
