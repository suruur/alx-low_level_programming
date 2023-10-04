#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - creates array
 * @str: array size
 * Return: array
 */
char *_strdup(char *str)
{
	char *s;
	size_t l;

	if (str == NULL)
		return (NULL);

	l = strlen(str);

	s = malloc(l + 1);

	if (s == NULL)
		return (NULL);

	strcpy(s, str);

	return (s);
}
