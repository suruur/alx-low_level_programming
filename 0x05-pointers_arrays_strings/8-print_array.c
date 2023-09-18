#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_array - prints string..
 * @a: int pointer
 * @n: int n
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
	}

	printf("\n");
}
