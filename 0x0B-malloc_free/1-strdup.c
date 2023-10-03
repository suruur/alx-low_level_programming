#include "main.h"
#include <stdlib.h>

/**
 * _strdup - creates array
 * @str: array size
 * Return: array
 */
char *_strdup(char *str)
{
	char *s;

	s = malloc(sizeof(str));

	s = str;

	if (!s)
		return (NULL);


	return (s);
}
