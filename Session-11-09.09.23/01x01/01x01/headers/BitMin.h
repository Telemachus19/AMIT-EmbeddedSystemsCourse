/*
 * BitMin.h
 *
 * Created: 9/9/2023 8:24:22 PM
 *  Author: aashr
 */ 


#ifndef BITMIN_H_
#define BITMIN_H_

#define setBit(byte,nbit)   ((byte) |=  (1u<<(nbit)))
#define clrBit(byte,nbit)	((byte) &= ~(1u<<(nbit)))
#define tgglBit(byte,nbit)  ((byte) ^=  (1u<<(nbit)))
#define readBit(byte,nbit)	((byte) &   (1u<<(nbit)))

#endif /* BITMIN_H_ */