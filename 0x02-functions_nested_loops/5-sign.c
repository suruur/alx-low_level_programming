#include "main.h"
/**
* print_sign - a function that prints the sign of a number. 
* @n: formal parameter
* Return: r
*/
int print_sign(int n)
{
	int r;
	
	if (n < 1)
		r = '-';
	else
		if ( n > 1)
			r = '+';
		else 
			if ( n == 0)
				r = 0;
	return (r);
}
