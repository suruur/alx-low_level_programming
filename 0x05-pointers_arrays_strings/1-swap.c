#include "main.h"

/**
 * swap_int - swaps 2 integers.
 * @a: int pointer
 * @b: int pointer
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
