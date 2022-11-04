#ifndef MY_LIBRARY_H
#define MY_LIBRARY_H

#include <Arduino.h>

int addTwoInts(int a, int b);
int subTwoInts(int a, int b);


class Led {
  
  private:
    byte pin;
    
  public:
    // Setup pin LED and call init()
    Led(byte pin);
    // Setup the pin led as OUTPUT
    // and power off the LED - default state
    void init();
    
    // Power on the LED
    void on();
    // Power off the LED
    void off();
};







#endif
