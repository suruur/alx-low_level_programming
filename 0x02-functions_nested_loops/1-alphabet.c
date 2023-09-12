#include "main.h"
/**
 * print_alphabet - prints alphabet in lower case
 * Return: void
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar (letter);
		letter++;
	}

	/* print a new line at the end */
	_putchar ('\n');
}
