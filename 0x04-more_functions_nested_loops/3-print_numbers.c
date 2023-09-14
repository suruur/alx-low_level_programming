#include "main.h"

/**
 * print__numbers - Entry point
 *
 * Return: void
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 9; i++)
		_putchar(i);

	/* print a new line at the end */
	_putchar ('\n');
}
