#include <stdlib.h>
#include <stdio.h>
#include"main.h"
/**
 * flip_bits - convert
 * @n: int
 * @m: index
 * Return: int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_res;
	unsigned int c;

	xor_res = n ^ m;
	c = 0;

	while (xor_res)
	{
		c += xor_res & 1;
		xor_res >>= 1;
	}

	return (c);
}
