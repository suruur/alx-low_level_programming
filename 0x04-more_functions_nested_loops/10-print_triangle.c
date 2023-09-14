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

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < i; j++)
		{
			for (k = size; k > i; k--)
				_putchar(' ');
			_putchar('#');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
