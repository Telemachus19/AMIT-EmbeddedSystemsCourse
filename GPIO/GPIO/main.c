/*
 * GPIO.c
 *
 * Created: 9/9/2023 4:01:18 PM
 * Author : DeLL
 */ 

#include <avr/io.h>
#define  F_CPU 16000000UL
#include <util/delay.h>
#include "GPIO.h"
#include "Std_macros.h"

int main(void)
{
    // DIO_set_port_direction('C',0xff);
	unsigned char arr[] = {0,1,2,3,4,5,6,7,8,9};
	unsigned char counter = 0 ;
	DDRA |= 0xf0;
	DDRB |= (1u << 1);
	for(counter = 0 ; counter < 10; counter++){
		arr[counter] <<= 4;
	}
	PORTB |= (1u << 2);
    while(1)
    {
		for(counter = 0; counter < 10; counter++){
			
			PORTA &= 0x0f;
			PORTA |= arr[counter];
			_delay_ms(1000);
			TOG_BIT(PORTB,2);
			_delay_ms(30);
			TOG_BIT(PORTB,1);
		}
	   //  DIO_write('C',2,1);
	//	DIO_write('C',7,1);
	  //  _delay_ms(1000);
	   // DIO_write('C',2,0);
	//	DIO_write('C',7,0);
	  //  _delay_ms(1000);
	}
}

