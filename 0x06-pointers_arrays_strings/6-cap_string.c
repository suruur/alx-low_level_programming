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
		if (
				a[i] == ' ' || a[i] == ','
				|| a[i] == ';' || a[i] == '.'
				|| a[i] == '!' || a[i] == '?'
				|| a[i] == '\"'	|| a[i] == ')'
				|| a[i] == '(' || a[i] == '{'
				|| a[i] == '}' || a[i] == '\n'
				|| a[i] == '\t')
			a[i + 1] = toupper((unsigned char)a[i + 1]);

	return (a);
}
