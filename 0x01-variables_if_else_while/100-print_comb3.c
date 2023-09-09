#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
		for (j = 0; j <= 9; j++)
			if (i != j )
			{
				putchar ('0' + i);
				putchar ('0' + j);
				putchar (' ');
			}

	/* print a new line at the end */
	putchar ('\n');
	return (0);
}
