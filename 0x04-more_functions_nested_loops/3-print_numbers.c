#include "main.h"

/**
 * print__numbers - prints numbers form 0 to 9
 *
 * Return: void
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		_putchar('0' + i);
	/* print a new line at the end */
	_putchar ('\n');
}
