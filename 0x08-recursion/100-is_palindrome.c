#include "main.h"
#include <string.h>
/**
 * tmp - tmp duc
 * @s: string
 * @st: int
 * @e: end
 * Return: int
 */
int tmp(char *s, int st, int e)
{
	if (st >= e)
		return (1);


	if (s[st] == s[e])
		return (tmp(s, st + 1, e - 1));

	return (0);
}
/**
 * is_palindrome - prints string.
 * @s: string pointer
 * Return: int
 */
int is_palindrome(char *s)
{
	int len;

	len = strlen(s);

	return (tmp(s, 0, len - 1));
}
