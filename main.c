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
#include "font.c"
#include "i2cnaval.c"
#include "i2c_oled_SSD1306.c"

/*// OLED Start Here //*/

/*// OLED END Here //*/



int main(void)
{
    /* Replace with your application code */
	DDRD = 0xFF;
	PORTD = 0x00;
	//i2c_init();
	lcd_init(LCD_DISP_ON);
	_delay_ms(100);
	lcd_puts("Hello World");  // put string from RAM to display (TEXTMODE) or buffer (GRAPHICMODE)
	lcd_gotoxy(0,2);          // set cursor to first column at line 3
	lcd_puts_p(PSTR("String from flash"));  // puts string form fl
	
    while (1) 
    {
		PORTD = 0x00;
		_delay_ms(1000);
		PORTD = 0xff;
		//i2c_write('A');
		_delay_ms(1000);
		
		
		
	
		
    }
}

