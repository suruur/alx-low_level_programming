#include "main.h"
/**
 * _abs - a function that computes the absolute value of an integer.
 * @n: number to be calculated
 * Return: n
 */
int  _abs(int n)
{
	if (n < 1)
	{
		n = n * -1;
		return (n);
	}
	else
		return (n);
}
