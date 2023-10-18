/*`
 * Std_macros.h
 *
 * Created: 9/9/2023 4:14:54 PM
 *  Author: DeLL
 */ 


#ifndef STD_MACROS_H_
#define STD_MACROS_H_
#define SET_BIT(reg,bin) reg|=(1u<<bin)
#define CLR_BIT(reg,bin) reg&=~(1u<<bin)
#define TOG_BIT(reg,bin) reg^=(1u<<bin)
#define READ_BIT(reg,bin) ((reg &(1u<<bin))>>bin)
#define IS_BIT_ZEOR(RED,bin) !((1u<<bin))>>bin)
#endif /* STD_MACROS_H_ */