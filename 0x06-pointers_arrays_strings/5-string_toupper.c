#include "main.h"
#include <string.h>
#include <stdio.h>
#include <ctype.h>

/**
 * string_toupper - concat string.
 * @a: string pointer
 * Return: string
 */

char *string_toupper(char *a)
{
	int i;
	int len;

	len = strlen(a);

	for (i = 0; i < len; i++)
		if (a[i] >= 'a' && a[i] <= 'z')
			a[i] = toupper((unsigned char)a[i]);

	return (a);
}
