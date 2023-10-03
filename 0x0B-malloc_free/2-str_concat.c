#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - creates array
 * @s1: array size
 * @s2: str
 * Return: array
 */
char *str_concat(char *s1, char *s2)
{
	int l1, l2;
	char *res;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	l1 = strlen(s1);
	l2 = strlen(s2);

	res = malloc(l1 + l2 + 1);

	if (res == NULL)
		return (NULL);

	strcpy(res, s1);
	strcat(res, s2);

	return (res);
}
