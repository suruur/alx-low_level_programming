#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - creates array
 * @s1: array size
 * @s2: first char
 * @n: n char
 * Return: array
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l1, l2;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	l1 = strlen(s1);
	l2 = strlen(s2);

	if (n >= l2)
		n = l2;

	str = (char *)malloc(l1 + n + 1);

	if (str == NULL)
		return (NULL);

	strcpy(str, s1);
	strncat(str, s2, n);

	return (str);
}
