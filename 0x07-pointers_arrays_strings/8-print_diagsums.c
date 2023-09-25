#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print diag
 * @a: int pointer
 * @size: size
 * Return:  void
 */
void print_diagsums(int *a, int size)
{
	int i;
	int d1;
	int d2;

	for (i = 0; i < size; i++)
	{
		d1 = d1 + a[i * size + i];
		d2 = d2 + a[i * size + (size - 1 - i)];
	}

	printf("%d, %d\n", d1, d2);
}
