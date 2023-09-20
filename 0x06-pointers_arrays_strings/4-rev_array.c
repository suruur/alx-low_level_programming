#include "main.h"
#include <string.h>

/**
 * reverse_array - reverse array.
 * @a: int pointer
 * @n: length
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int len;
	int dlen;
	int cmp;

	len = strlen(src);
	dlen = strlen(dest);

	for (i = 0; i < len && src[i] != '\0'; i++)
		dest[dlen + i] = src[i];
	dest[dlen + i] = '\0';
}
