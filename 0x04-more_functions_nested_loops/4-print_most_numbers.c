#include "main.h"

/**
 * print_most_numbers - Entry point
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		if (i == 2 || i == 4)
			continue;
		else
			_putchar('0' + i);

	/* print a new line at the end */
	_putchar ('\n');
}
