#include "main.h"

/* a function that checks for alphabetic character. */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		r = 1;
	else
		if ( c >= 'A' && c <= 'Z')
			r = 1;
		else 
			r = 0;
	
	return (r);
}
	