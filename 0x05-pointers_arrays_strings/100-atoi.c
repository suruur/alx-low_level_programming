#include "main.h"

/**
 * _atoi - convert the value.
 * @s: int pointer
 * Return: int
 */
int _atoi(char *s)
{
	int res = 0;
	int sign = 1;

	while (*s == ' ' || *s == '\t' || *s == '\n')
		s++;

	if (*s == '-' || *s == '+')
	{
		if (*s == '-')
			sign = -1;
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		res = res * 10 + (*s - '0');
		s++;
	}

	return (sign * res);
}
