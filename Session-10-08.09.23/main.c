#include <avr/io.h>
#define F_CPU 80000000UL
#include <util/delay.h>

int main(void)
{
    DDRA = 0xff;
    unsigned char arr[] = {0x3f,
                           0x06,
                           0x5b,
                           0x4f,
                           0x66,
                           0x6d,
                           0x7d,
                           0x07,
                           0x7f};
    while (1)
    {
        for (int i = 0; i < 9; i++)
        {
            _delay_ms(1000);
            PORTD = arr[i];
        }
    }
}