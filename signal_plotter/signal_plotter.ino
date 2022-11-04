void setup() {
  pinMode(A0,INPUT);
  Serial.begin(9600);
}

void loop() {


 int pot = analogRead(A0);
 int pot1 = map(pot,0,1023,1,10);
 float pot3 = constrain(pot1,1,10);

 for (int i = 0; i <= 30; i++) 

{
  float alpha = map(i,0,29,0,30);
  float alpha1 = constrain(alpha,0,30);
  float a = pot3;
  float f = map(i,0,29,0,50);
  float f1 = constrain(f,0,50);
  float  w =( 2 * 3.1416 * f1);
  float  t = (1/f1);
  float wt = (w*t) + alpha1;
  
  
  
  
  float cv = map(wt,7.28,37.28,0,360);
  float vb = constrain(cv,0,360);

  
  float SIN = a*sin(degree(vb));
  float SIN_INVERSE = -a*sin(degree(vb));
  float COS = a*cos(degree(vb));
  float COS_INVERSE = -a*cos(degree(vb));
  float TAN = a*tan(degree(vb));
  float TAN_INVERSE = -a*tan(degree(vb));
  float Half_wave_negative = constrain(SIN,-10,0);
  float Half_wave_positive = constrain(SIN,0,10);
  float SAW_tooth = vb;
  float SAW_inverse = -1*vb;
  Serial.print("SIN 1:");
  Serial.print(-Half_wave_negative);
  Serial.print(",");
  Serial.print("TAN 2:");
  Serial.println(Half_wave_positive);
  Serial.print(",");
  
}

  
  


  
 
  


}


float degree(double degg)
{
  return(degg*22)/(7*180);
}
