#include "main.h"
#include "1-alphabet.c"

/* Function print_alphabet: print alphabet in lower case */
void print_alphabet_x10(void)
{
	int i;

	for(i = 0; i < 10; i++)
		print_alphabet();

	/* print a new line at the end */
	_putchar ('\n');
}
