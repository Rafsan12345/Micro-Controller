/*
 * Lcd.h
 *
 *  Created on: 2015/03/26
 *      Author: TOSHIBA
 */

#ifndef LCD_H_
#define LCD_H_

class LCD {
	bool WriteBytes(const char *data, int length, bool repeated);
	void WriteLCDcmd(unsigned char command);
	void WriteLCDdata(unsigned char data);

	public:
	LCD();
	void InitLcd(void);
	void LcdString(int line, char* s);
	void LcdString2(int line, char* s);
	void ClearDisplay(void);
	void ClearLine(int line);
};

#endif /* LCD_H_ */
