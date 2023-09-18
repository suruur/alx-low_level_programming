#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * puts_half - prints string..
 * @str: string
 * Return: void
 */
void puts_half(char *str)
{
	int i;
	int half;

	int len = strlen(str);

	half = len / 2;

	if ( len % 2 != 0)
		half++;

	for (i = half ; i < len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
