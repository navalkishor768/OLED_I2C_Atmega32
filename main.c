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



int main(void)
{
    /* Replace with your application code */
	DDRD = 0xFF;
	PORTD = 0x00;
    while (1) 
    {
		PORTD = 0x00;
		_delay_ms(500);
		PORTD = 0xff;
		_delay_ms(500);
		
    }
}

