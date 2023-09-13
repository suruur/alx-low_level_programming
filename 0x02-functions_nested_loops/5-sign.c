#include "main.h"
#include <stdio.h>
/**
* print_sign - a function that prints the sign of a number.
* @n: formal parameter
* Return: 1, -1, 0
*/
int print_sign(int n)
{
	int r;
	if (n > 0)
	{
		_putchar('+');
		r = 1;
	}
	else
		if ( n < 0)
		{
			_putchar('-');
			r = -1;
		}
			else
			{
			 _putchar('0');
			 r = 0;
			}
        return (r);
}
