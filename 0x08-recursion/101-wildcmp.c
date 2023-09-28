#include "main.h"

/**
 * wildcmp - prints string.
 * @s1: string pointer
 * @s2: string
 * Return: int
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}

	if (*s1 == *s2 || *s2 == '*')
		return (wildcmp(s1 + 1, s2 + 1) || wildcmp(s1 + 1, s2)
				|| wildcmp(s1, s2 + 1));

	return (0);
}
