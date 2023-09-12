#include "main.h"
#include "1-alphabet.c"

/* Function print_alphabet_x10: print alphabet in lower case 10 times */
void print_alphabet_x10(void)
{
	int i;

	for(i = 0; i < 10; i++)
		print_alphabet();

}
