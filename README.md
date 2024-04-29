Use Arduino IDE or Arduino.cc
# Micro-Controller
https://github.com/Rafsan12345/Micro-Controller-.git

void send_byte_msb(unsigned char d)
{
	for(int i=0;i<8;i++)
	{
		if(d&0x80)
			{
				HAL_GPIO_WritePin(GPIOA, GPIO_PIN_3, 1);
				HAL_Delay(100);

			}
			else
			{
				HAL_GPIO_WritePin(GPIOA, GPIO_PIN_3, 0);
				HAL_Delay(100);

			}
		d<<=1;

	}
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_3, 0);

}



void send_byte_lsb(unsigned char d2)
{
	for(int i=0;i<8;i++)
	{
		if(d2&0x01)
			{
				HAL_GPIO_WritePin(GPIOA, GPIO_PIN_3, 1);
				HAL_Delay(100);

			}
			else
			{
				HAL_GPIO_WritePin(GPIOA, GPIO_PIN_3, 0);
				HAL_Delay(100);

			}
		d2>>=1;

	}
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_3, 0);

}
