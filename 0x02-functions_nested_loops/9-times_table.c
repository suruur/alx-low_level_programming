#include <stdio.h>
/**
 * times_table - a function that prints the 9 times table,
 * starting with 0.
 * Return: void
 */
void times_table(void)
{
	int i;
	int j;
	
    	for (i = 0; i <= 9; i++)
	{
		for ( j = 1; j <= 9; j++)
        		printf("%d, ", (i * j));
		printf("\n");
	}
}
