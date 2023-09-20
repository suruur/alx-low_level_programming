#include "main.h"
#include <string.h>

/**
 * _strncat - concat string.
 * @dest: string pointer
 * @src: string pointer
 * @n: int
 * Return: string pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int dlen;

	dlen = strlen(dest);

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dlen + i] = src[i];
	dest[dlen + i] = '\0';

	return (dest);
}
