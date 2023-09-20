#include "main.h"
#include <string.h>

/**
 * cap_string - concat string.
 * '': string pointer
 * Return: string pointer
 */
char *cap_string(char *)
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
