#include <stdio.h>
#include "main.h"

/**
 * times_table - a function that prints the 9 times table,
 * starting with 0.
 * Return: void
 */

void times_table(void)
{
	int i;
	int j;
	int t;
	
    	for (i = 0; i <= 9; i++)
	{
		for ( j = 0; j <= 9; j++)
		{
			t = i * j;
        		/*printf("%d", t);*/
			if (i == 0 && j == 0)
				printf("%2d, ", t);
			else
				printf("%d, ", t);
			/*if (j != 9)
			{
				if (t <= 9)
				{
					printf(",  ");	
				}
				else
				{
					printf(", ");
				}
			} */
		}
		printf("\n");
	}
}
