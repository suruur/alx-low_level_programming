#include "main.h"
#include <string.h>
/**
 * is_palindrome - prints string.
 * @s: string pointer
 * Return: int
 */
int is_palindrome(char *s)
{
	int len;


	if (strlen(s) <= 1)
	{
		return (1);
	}
	else
		len = strlen(s);

	if (s[0] != s[len - 1])
	{
		return (0);
	}
	else
	{
		s[len - 1] = '\0';
		return (is_palindrome(s + 1));
	}

}
