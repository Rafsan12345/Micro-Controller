 float sss = 2.048;
float sensor;

// 5v = 1024, 1v = 204.4, 1mv = 0.24, 10mv = 2.048

void setup() {
Serial.begin(9600);  

}

void loop() {


  
  sensor = temp(sss);
Serial.println(sensor);
}


float temp(float x1)
{
  float result,result1;
  

  result = (x1*5000)/1024;
  result1 =  result/10;
  return result1;
}
