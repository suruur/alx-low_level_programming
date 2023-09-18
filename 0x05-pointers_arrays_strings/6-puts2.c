#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * puts2 - prints string..
 * @str: string
 * Return: void
 */
void puts2(char *str)
{
	int i;

	int len = strlen(str);

	for (i = 0; i < len; i++)
		if (i % 2 == 0)
			_putchar(str[i]);
	_putchar('\n');
}
