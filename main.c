/*
 * OLED_I2C_Atmega32.c
 *
 * Created: 29-10-2023 18:15:13
 * Author : naval
 */ 

#ifndef	F_CPU
#define F_CPU	16000000UL
#endif

#include <avr/io.h>
#include <util/delay.h>
#include "fontSSD1306.c"
#include "i2cnaval.c"
#include "i2c_oled_SSD1306.c"


int main(void)
{
    /* Replace with your application code */
	uint8_t x = 0,str[5];
	DDRD = 0xFF;
	PORTD = 0x00;
	//i2c_init();
	lcd_init(LCD_DISP_ON);
	_delay_ms(100);
	lcd_puts("Hello World");           
	_delay_ms(4000);
	lcd_clrscr();
	lcd_charMode(DOUBLESIZE);
	lcd_puts("Temp ");
    while (1) 
    {
		PORTD = 0x00;
		_delay_ms(1000);
		PORTD = 0xff;
		_delay_ms(1000);
		lcd_gotoxy(0,3);
		sprintf(str,"%d °C",x);
		lcd_puts(str);
		x++;
		
    }
}

