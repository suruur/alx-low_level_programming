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
		for (j = i + 1; j <= 9; j++)
		{
			int comb = i * 10 + j;
			putchar ('0' + (comb / 10));
			putchar ('0' + (comb % 10));
			putchar (',');
			putchar (' ');
		}

	/* print a new line at the end */
	putchar ('\n');
	return (0);
}
