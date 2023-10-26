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
	int bit_val;

	if (index > 63)
	{
		return (-1);
	}
	bit_val = (n >> index) & 1;

	return (bit_val);
}
