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
	int t;
	
    	for (i = 0; i <= 10; i++)
	{
		for ( j = 0; j <= 9; j++)
		{
			t = i * j;
        		printf("%d,  ", t);
		}
		printf("\n");
	}
}
