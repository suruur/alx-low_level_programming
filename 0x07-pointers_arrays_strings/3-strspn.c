#include "main.h"

/**
 * _strspn - concat string.
 * @s: string pointer
 * @accept: filling char
 * Return:  unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int c;
	int isacc[256] = {0};

	c = 0;

	while (*accept)
	{
		isacc[(unsigned char)*accept] = 1;
		accept++;
	}
	while (*s && isacc[(unsigned char)*s])
	{
		c++;
		s++;
	}

	return (c);
}
