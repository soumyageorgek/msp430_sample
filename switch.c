/*This program keeps LED on,when we press switch.LED become off when releases the key*/
#include <io.h>
main()
{
	P1DIR=0x1;
	while(1){
		if((P1IN&(1<<3))==(1<<3))
			P1OUT=0;
		else
			P1OUT=1;
	}
}
