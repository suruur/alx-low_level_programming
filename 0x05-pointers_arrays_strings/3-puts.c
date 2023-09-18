#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * _puts - prints string..
 * @str: string
 * Return: void
 */
void _puts(char *str)
{
	int i;

	int len = strlen(str);

	for (i = 0; i < len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
