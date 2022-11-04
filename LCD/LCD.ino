#include<LiquidCrystal.h>
LiquidCrystal lcd (13,12,11,10,9,8);






void setup()
{
lcd.begin(16,2);
}






 
void loop()
 
 {
   lcd.setCursor(4,0);
   lcd.print("HELLO");
  
  lcd.setCursor(3,1);
  lcd.print("DAFFODILIAN");
  
 }
