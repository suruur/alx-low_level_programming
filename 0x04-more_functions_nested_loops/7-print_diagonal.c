#include "main.h"

/**
 * print_diagonal - Entry point
 * @n: line lenght
 * Return: void
 */
void print_diagonal(int n)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}

	_putchar('\n');
}
