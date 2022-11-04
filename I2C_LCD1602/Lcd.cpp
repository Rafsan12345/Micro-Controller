#include "mbed.h"
#include "Lcd.h"

I2C i2cLcd(p28, p27);

static const int devAddr = 0xA0;

//constructor
LCD::LCD()
{
	InitLcd();
}

bool LCD::WriteBytes(const char *data, int length, bool repeated = false) {
	wait_us(20);
	i2cLcd.start();
	for (int i = 0; i < length; i++) {
		wait_us(20);
		if (i2cLcd.write(data[i]) != 1) { //'1' if an ACK was received, '0' otherwise
			wait_us(20);
			i2cLcd.stop();
			return false;
		}
	}
	if (repeated == false) {
		wait_us(20);
		i2cLcd.stop();
	}
	return true;
}
void LCD::WriteLCDcmd(unsigned char command) {
	char cmd[3];
	cmd[0] = devAddr;
	cmd[1] = 0x00;
	cmd[2] = command;
	WriteBytes(cmd, 3, false);
}
void LCD::WriteLCDdata(unsigned char data) {
	char cmd[3];
	cmd[0] = devAddr;
	cmd[1] = 0x80;
	cmd[2] = data;
	WriteBytes(cmd, 3, false);
}
void LCD::LcdString(int line, char* s) {
	if (line == 0) {
		//Set DDRAM Address //first line
		WriteLCDcmd(0x80);
	} else {
		//Set DDRAM Address
		WriteLCDcmd(0x80 | 0x40);   //second line 0xC0
	}
	char c;
	while ((c = *s++) > 0) {
		wait_ms(5);   //5ms
		//Write Data to RAM
		WriteLCDdata(c);
	}
	wait_ms(5);   //5ms
}
void LCD::LcdString2(int line, char* s) {
	if (line == 0) {
		//Set DDRAM Address //first line
		WriteLCDcmd(0x80);
	} else {
		//Set DDRAM Address
		WriteLCDcmd(0x80 | 0x40);   //second line 0xC0
	}
	char c;
	int n = 0;
	while ((c = *s++) > 0) {
		wait_ms(5);   //5ms
		//Write Data to RAM
		WriteLCDdata(c);
		n++;
	}
    for ( ; n < 16 ; n++ ){
		wait_ms(5);   //5ms
		//Write Data to RAM
		WriteLCDdata(' ');
    }
	wait_ms(5);   //5ms
}
void LCD::InitLcd() {
	wait_ms(15);   //15ms
	WriteLCDcmd(0x01);   // Clear Diplay
	wait_ms(5);   //5ms
	//ファンクションセット DL=1,N=1,F=0  0011 1000
	//b5 = 1
	// 0b001x0000; DL; Interface Data length. 8bits/4bits
	// 0b0010x000; N;  Numbers of display line. 2-line/1-line
	// 0b00100x00; F;  Display font type. 5x10dots/5x8dots
	WriteLCDcmd(0x38);
	wait_ms(5);	//5ms
	//Display ON/OFF Control
	//b3 = 1
	// 0b00001x00; D;  Set display on/off.
	// 0b000010x0; C;  Set curthor on/off.
	// 0b0000100x; B;  Set blinking of curthor on/off.
	WriteLCDcmd(0x0c);
	wait_ms(5);	//5ms
	// Entry Mode Set
	//b2 = 1
	// 0b000001x0; I/D;Assign curthor moving direction.
	// 0b0000010x; I/D;Enable the shift of entire display.
	WriteLCDcmd(0x06);
	wait_ms(5);	//5ms
}
void LCD::ClearDisplay() {
	WriteLCDcmd(0x01);	// Clear Diplay
	wait_ms(5);	//5ms
}
void LCD::ClearLine(int line) {
	if (line == 0) {
		//Set DDRAM Address //first line
		WriteLCDcmd(0x80);
	} else {
		//Set DDRAM Address
		WriteLCDcmd(0x80 | 0x40);   //second line 0xC0
	}
	for (int n = 0; n < 16; n++) {
		wait_ms(5);   //5ms
		//Write Data to RAM
		WriteLCDdata(' ');
	}
	wait_ms(5);   //5ms
}
