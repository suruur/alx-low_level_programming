#include "main.h"
#include <string.h>

/**
 * _strcmp - concat string.
 * @s1: string pointer
 * @s2: string pointer
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{

	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}

	return (0);
}