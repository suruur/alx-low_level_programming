#include "main.h"
/* a function that prints the sign of a number. */
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
