#include "my_library.h"

int addTwoInts(int a, int b)
{
  return a + b;
}
int subTwoInts(int a, int b)
{
  return a - b;
}



Led::Led(byte pin) {
  this->pin = pin;
  init();
}


void Led::init() {
  pinMode(pin, OUTPUT);
  off();
}


void Led::on() {
  digitalWrite(pin, HIGH);
}


void Led::off() {
  digitalWrite(pin, LOW);
}











