#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char lower = 'a';
	char upper = 'A';

	while (lower <= 'z')
	{
		putchar (lower);
		putchar (upper);
		lower++;
		upper++;
	}

	/* print a new line at the end */
	putchar ('\n');
	return (0);
}
