/*Here LED become on and off alternately on timerA overflow interrupt.Task of toggling accomplished inside interrupt.*/
#include <io.h>
#include <signal.h>
void init()
{
        P1DIR = 1;
        WDTCTL = WDTPW | WDTHOLD;
        TACTL = MC_2 | ID_3 | TASSEL_2 | TAIE;
        P1OUT = 0;
}

interrupt (TIMERA1_VECTOR) IntServiceRoutine(void)
{
	P1OUT = P1OUT ^ 1;
	TACTL = TACTL & ~1;
}

main()
{
	eint();
	init();
	while(1);
	
}
