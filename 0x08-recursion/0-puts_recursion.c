#include "main.h"

/**
 * _puts_recursion - prints string.
 * @s: string pointer
 * Return: void
 */
void _puts_recursion(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		_puts_recursion(s[i]);
		i++;
	}

	return (0);

}
