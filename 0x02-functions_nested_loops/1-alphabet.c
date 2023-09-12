#include "main.h"



/**
 * Function : print_alphabet 
 *
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

	* print a new line at the end 
	_putchar ('\n');
}
