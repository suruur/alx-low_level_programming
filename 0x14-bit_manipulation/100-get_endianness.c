#include <stdlib.h>
#include <stdio.h>
#include"main.h"
/**
 * get_endianness - convert
 *
 * Return: int
 */
int get_endianness(void)
{
	unsigned int num;
	char *b;

	num = 0;
	b = (char *)&num;

	if (*b == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
