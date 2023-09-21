#include "main.h"
#include <string.h>

/**
 * rot13 - concat string.
 * @str: string pointer.
 * Return: string pointer
 */
char *rot13(char *str)
{
	int i;
	int j;
	char c, base;


	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		c = str[i];
		if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		{
			base = (c >= 'a' && c <= 'z') ? 'a' : 'A';
			str[i] = (c - base + 13) % 26 + base;
		}
	}

	return (str);
}
