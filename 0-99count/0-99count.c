/*
 * _0_99count.c
 *
 * Created: 1/30/2018 4:44:43 PM
 *  Author: ADITYA
 */ 


#include <avr/io.h>
#define F_CPU 1000000UL
#include <util/delay.h>

int main(void)
{
	DDRA=DDRB=0xff;
	unsigned char seg[10]={0xfc,0x60,0xda,0xf2,0x66,0xb6,0xbe,0xe0,0xfe,0xf6};
    while(1)
    {
		for (char i=0;i<10;i++)
		for (char j=0;j<10;j++)
		{
			PORTB=seg[i];
			PORTA=seg[j];
			_delay_ms(250);
			
		}
    }
}