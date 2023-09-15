#include "main.h"

/**
 * print_triangle - Entry point
 * @size: triangle size
 * Return: void
 */
void print_triangle(int size)
{
	int i;
	int j;
	int k;

	for (i = 0; i < size; i++)
	{
		for (k = 1; k > size - i; k++)
			_putchar(' ');

		for (j = 0; j <= i; j++)
			_putchar('#');

		_putchar('\n');
	}
	_putchar('\n');
}
