#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - a function that prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59. 
 * Retrun: void
 */
void jack_bauer(void)
{
	int i;
	int j;
	
	for (i = 0; i < 24; i++)
		for (j = 0; j <= 59; j++)
			printf( "%d%d :%d%d\n",i,i,i,j);
}
