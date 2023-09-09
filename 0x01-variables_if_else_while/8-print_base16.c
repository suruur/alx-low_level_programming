#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 16; i++)
	{	
		if (i < 10)
			putchar ('0' + i);
		else
			/* print letters a-f as characters*/
			putchar ('a' + i - 10);
	}

	/* print a new line at the end */
	putchar ('\n');
	return (0);
}
