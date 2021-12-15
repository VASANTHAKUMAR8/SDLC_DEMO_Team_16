/*
 * Parking.c
 *
 * Created: 01-12-2021 19:30:15
 * Author : ASUS
 */ 
#define F_CPU 16000000UL
#include <stdint.h>

#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
	
	uint16_t run = 1;
	
	DDRD = 0xFF; //0b11111111
	
	DDRB &= 0xF9;
	
	PORTB |= (1 << PORTB1) | (1 << PORTB2);
	
	while (1)
	{
		
		if((PINB & (1 << PINB1)) == 0){
			_delay_ms(250);
			if(run >= 0x80){
				run = 1;
			}
			else{
				run *= 2;
			}
		}
		
		if((PINB & (1 << PINB2)) == 0){
			_delay_ms(250);
			if(run <= 1){
				run = 0x80;
			}
			else{
				run /= 2;
			}
		}


		PORTD = run; // bit 7 off 0b00000000

	}
}

