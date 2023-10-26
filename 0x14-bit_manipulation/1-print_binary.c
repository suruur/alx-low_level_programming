#include <stdlib.h>
#include <stdio.h>
#include"main.h"
/**
 * print_binary - convert
 * @n: int
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int bit, shift;
	unsigned long int mask;

	for (shift = sizeof(n) * 8 - 1; shift >= 0; shift--)
	{
		mask = 1 << shift;
		bit = (n & mask) != 0 ? 1 : 0;
		putchar(bit + '0');
	}
	putchar('\n');
}
