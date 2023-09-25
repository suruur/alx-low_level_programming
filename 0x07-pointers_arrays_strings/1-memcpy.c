#include "main.h"

/**
 * _memcpy - copy string.
 * @dest: string pointer
 * @src: filling char
 * @n: unsigned int length
 * Return:  pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *dd;

	dd = dest;

	while (n--)
		*dest++ = *src++;

	return (dd);
}
