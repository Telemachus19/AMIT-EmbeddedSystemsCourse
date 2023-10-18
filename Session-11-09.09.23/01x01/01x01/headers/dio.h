/*
 * dio.h
 *
 * Created: 9/9/2023 8:33:59 PM
 *  Author: aashr
 */ 


#ifndef DIO_H_
#define DIO_H_
#include "stdtypes.h"

/*
 * Function Name: SetDirection
 * Function Arguments: uint8 DDR, dir d
 * Function Description: Sets the direction of the register (INPUT for input, OUTPUT for output)
 * Function Returns: 1 for successful setting. -1 for an error outside of range.
 */
int8 DIOSetPortDirection (uint8 DDR, dir d);



#endif /* DIO_H_ */