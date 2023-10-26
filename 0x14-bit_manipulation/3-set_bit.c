#include <stdlib.h>
#include <stdio.h>
#include"main.h"
/**
 * set_bit - convert
 * @n: int
 * @index: index
 * Return: int
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit_mask;

	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	bit_mask = 1UL << index;
	*n |= bit_mask;

	return (1);
}
