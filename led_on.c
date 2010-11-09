/*Here value written on P1DIR configures each ports as input or output.In this program P6 and P1 is configured as output ports.Writing to P1OUT make the LED on*/
#include<io.h>
main()
{
	P1DIR = 1<<6|1;
	P1OUT = 1<<6|1;
	while(1);
}
