#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * rev_string - prints string..
 * @s: string
 * Return: void
 */
void rev_string(char *s)
{
	int i;
	int j;
	char tmp;

	int len = strlen(s);

	for (i = 0, j = len - 1; i > j; i++, j--)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
	}
}
