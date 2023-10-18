/*
 * dio.c
 *
 * Created: 9/9/2023 8:39:23 PM
 *  Author: aashr
 */ 
#include "headers/BitMin.h"
#include "headers/registerNames.h"
int8 DIOSetPortDirection (uint8 DDR, dir d){
	switch(DDR){
		case 'A':
			DDRA = (d == OUPUT) ? 0xff:0x00;
			break;
		case 'B':
			DDRB = (d == OUPUT) ? 0xff:0x00;
			break;
		break;
		case 'C':
			DDRC = (d == OUPUT) ? 0xff:0x00;
			break;
		case 'D':
			DDRD = (d == OUPUT) ? 0xff:0x00;
			break;
		default:
		return -1;
	}
}

void DIO_WritePort(uint8 port, int8 value){
	switch(port){
		case 'A':
			PORTA = value;
			break;
		case 'B':
			PORTB = value;
			break;
		case 'C':
			PORTC = value;
			break;
		case 'D':
			PORTC = value;
			break;
		default:
			return;
	}
}

uint8 DIO_ReadPort(uint8 port){
	switch(port){
		case 'A':
			return PINA;
		case 'B':
			return PINB;
		case 'C':
			return PINC;
		case 'D':
			return PIND;
	}
}