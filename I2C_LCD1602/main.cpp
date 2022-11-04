#include "mbed.h"
#include "Lcd.h"

LCD lcd;

DigitalOut led1(LED1);
DigitalOut led2(LED2);
DigitalOut led3(LED3);
DigitalOut led4(LED4);

int main() {
	int ctr = 0;
	char buff[18];

	while (1) {
		sprintf(buff, "counter=%d",ctr);
		lcd.LcdString2(0, buff);
		if (++ctr >= 1000)
			ctr = 0;
		wait(0.25);
		led1 = !led1;
	}
}
