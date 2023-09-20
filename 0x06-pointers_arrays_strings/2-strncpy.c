#include "main.h"
#include <string.h>

/**
 * _strncpy - concat string.
 * @dest: string pointer
 * @src: string pointer
 * @n: int
 * Return: string pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[dlen + i] = '\0';

	return (dest);
}
