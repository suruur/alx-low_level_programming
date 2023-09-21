#include "main.h"
#include <string.h>
#include <stdio.h>
#include <ctype.h>

/**
 * cap_string - concat string.
 * @a: string pointer
 * Return: string
 */

char *cap_string(char *a)
{
	int i;
	int len;

	if (!a)
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
			if (i + 1 != len)
				if (a[i + 1] >= 'a' && a[i + 1] <= 'z')
					a[i + 1] = toupper((unsigned char)a[i + 1]);

	return (a);
}
