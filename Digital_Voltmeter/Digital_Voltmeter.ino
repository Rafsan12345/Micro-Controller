#include <SevSeg.h>
 SevSeg sevseg; 
 int input = A5;
 float Status = 0; 
 void setup()
{
  byte numDigits = 4;  // digit  
  byte digitPins[] = {10, 11, 12, 13}; // common or anode pin number  
  byte segmentPins[] = {6, 5, 2, 3, 4, 7, 8, 9}; // a6,b5,c2,d3,e4,f7,g8,dp9

  sevseg.begin(COMMON_CATHODE, numDigits, digitPins, segmentPins);
  //sevseg.setBrightness(90); 
  pinMode(input, INPUT);
  

}

  void loop()
{
  

float Status = analogRead(input);
float v = (Status/204.6);
float volt = v*2;
sevseg.setNumber(volt,0); // set number  i ans 1 id decimel point 
sevseg.refreshDisplay(); // clear this display 




















}
