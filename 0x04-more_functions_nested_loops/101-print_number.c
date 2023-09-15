#include "main.h"

/**
 * print_number - Entry point
 * @n: number to be printed
 * Return: void
 */
void print_number(int n)
{
	if < n < 0)
	{
		_putchar('-');
		n = -n;
	}

	int rev = 0;

	while (n > 0)
	{
		rev = rev * 10 + n % 10;
		n /= 10;
	}

	while (n > 0)
	{
		_putchar(rev % 10 + '0');
		rev /= 10;
	}

	_putchar('\n');
}
