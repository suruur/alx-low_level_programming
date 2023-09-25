#include "main.h"

/**
 * _memset - concat string.
 * @s: string pointer
 * @b: filling char
 * @n: int length
 * Return:  pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;
	char *p;
	char val;

	*p = s;
	val = b;


	for (i = 0; i < n; i++)
		*p++=val;


	return s;
}
