#include "main.h"
#include <stdio.h>
/**
* print_sign - a function that prints the sign of a number.
* @n: formal parameter
* Return: 1, -1, 0
*/
int print_sign(int n)
{
	if (n < 0)
	{
		printf("+");
		return (1);
	}
	else
		if ( n > 0)
		{
			printf("-");
			return (-1);
		}
			else
			{
			printf("0");
			return (0);
			}
}
