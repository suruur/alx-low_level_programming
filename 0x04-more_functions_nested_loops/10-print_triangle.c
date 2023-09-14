#include "main.h"

/**
 * print_triangle - Entry point
 * @size: square size
 * Return: void
 */
void print_triangle(int size)
{
	int i;
	int j;
	int k;
	int limit;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < i; j++)
		{
			limit = size - i;
			for (k = 0; k > limit; k++)
				_putchar(' ');
			_putchar('#');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
