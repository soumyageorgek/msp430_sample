/*Here LED toggling done on basis of checking TACTL register's right most bit.Method of busy looping is used here.*/
#include <io.h>
void init()
{
	P1DIR = 1;
	WDTCTL = WDTPW | WDTHOLD;
	TACTL = MC_2 | ID_3 | TASSEL_2 ;
	P1OUT = 0;
}
void delay()
{
	while((TACTL & 1) == 0);
	TACTL = TACTL & ~1;
}
main()
{
	init();
	while(1){
		P1OUT = 1;
		delay();
		P1OUT = 0;
		delay();
	}
}
