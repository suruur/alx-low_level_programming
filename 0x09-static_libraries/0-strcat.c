#include "main.h"
#include <string.h>

/**
 * _strcat - concat string.
 * @dest: string pointer
 * @src: string pointer
 * Return: string pointer
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int len;
	int dlen;

	len = strlen(src);
	dlen = strlen(dest);

	for (i = 0; i < len && src[i] != '\0'; i++)
		dest[dlen + i] = src[i];
	dest[dlen + i] = '\0';

	return (dest);
}
