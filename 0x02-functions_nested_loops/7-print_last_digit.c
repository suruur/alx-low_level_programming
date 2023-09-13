#include "main.h"

/**
 * print_last_digit - a function that prints the last digit of a number.
 * @n: digit to get its last
 * Return: last_digit
 */

int  print_last_digit(int n)
{
	int r;

	if (n == 0)
	{
		r = 0;
		_putchar (r + '0');
	}
	else
	{
		if (n < 0)
		{
			n = n * -1;
			r = n % 10;
		}
		r = n % 10;
		_putchar (r + '0');
	}
	return (r);
}
