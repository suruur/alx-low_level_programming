#include "main.h"
#include <stdlib.h>
/**
 * _strpbrk - concat string.
 * @s: string pointer
 * @accept: string
 * Return:  pointer
 */
char *_strpbrk(char *s, char *accept)
{
	char *a;

	a = accept;

	if (s == NULL || accept == NULL)
		return (NULL);

	while (*s)
	{
		while (*a)
		{
			if (*s == *a)
				return (s);
			a++;
		}
		s++;
	}

	return (NULL);
}
