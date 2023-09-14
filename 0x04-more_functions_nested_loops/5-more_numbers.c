#include "main.h"

/**
 * more_numbers - prints numbers for 0 to 14
 *
 * Return: void
 */
void more_numbers(void)
{
	int i;
	int j = 0;

	while(j < 10)
	{
		for (i = 0; i <= 14; i++)
			_putchar('0' + i);
		j++;
		_putchar('\n');
	}

	_putchar('\n');
}
