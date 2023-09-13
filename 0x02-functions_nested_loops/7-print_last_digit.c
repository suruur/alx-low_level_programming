#include "main.h"

/* print_last_digit - a function that prints the last digit of a number.
 * @n: digit to get its last
 * Return: last_digit
 */

int  print_last_digit(int n)
{
	int r;
	
	r = n % 10;
	_putchar (r);
	return r;
}
