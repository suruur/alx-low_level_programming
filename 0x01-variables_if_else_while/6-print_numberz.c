#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		putchar('0' + i);

	/* print a new line at the end */
	putchar ('\n');
	return (0);
}
