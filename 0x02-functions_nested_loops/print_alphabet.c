#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
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
