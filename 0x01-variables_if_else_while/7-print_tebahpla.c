#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar (letter);
		letter--;
	}

	/* print a new line at the end */
	putchar ('\n');
	return (0);
}
