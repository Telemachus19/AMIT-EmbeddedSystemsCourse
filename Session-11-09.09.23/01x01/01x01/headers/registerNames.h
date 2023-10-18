/*
 * registerNames.h
 *
 * Created: 9/9/2023 6:30:49 PM
 *  Author: aashr
 */ 


#ifndef REGISTERNAMES_H_
#define REGISTERNAMES_H_
/*
 * Define DDRs.
 */
#define DDRA *(volatile unsigned char*) (0x3A)
#define DDRB *(volatile unsigned char*) (0x37)
#define DDRC *(volatile unsigned char*) (0x34)
#define DDRD *(volatile unsigned char*) (0x31)

/*
 * Define ports. 
 */
#define PORTA *(volatile unsigned char*) (0x3B)
#define PORTB *(volatile unsigned char*) (0x38)
#define PORTC *(volatile unsigned char*) (0x35)
#define PORTD *(volatile unsigned char*) (0x32)
/*
 * Define Pins.
 */
#define PINA *(volatile unsigned char*) (0x39)
#define PINB *(volatile unsigned char*) (0x36)
#define PINC *(volatile unsigned char*) (0x33)
#define PIND *(volatile unsinged char*) (0x30)
#endif /* REGISTERNAMES_H_ */