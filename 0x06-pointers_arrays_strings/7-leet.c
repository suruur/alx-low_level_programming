#include "main.h"
#include <string.h>

/**
 * leet - concat string.
 * @str: string pointer.
 * Return: string pointer
 */
char *leet(char *str)
{
	int i;
	int j;

	char *leetchars = "aAeEoOtTlL";
	char *leetencode = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
		for (j = 0; leetchars[j] != '\0'; j++)
			if (str[i] == leetchars[j])
			{
				str[i] = leetencode[j];
				break;
			}

	return (str);
}
