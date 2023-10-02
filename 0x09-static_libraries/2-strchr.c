#include "main.h"
#include <stdlib.h>

/**
 * _strchr - concat string.
 * @s: string pointer
 * @c: filling char
 * Return:  pointer
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (c == '\0')
		return (s);

	return (NULL);

}
