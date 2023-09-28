#include "main.h"

/**
 * tmp - temp func
 * @n: int
 * @g: int
 * Return: int
 */

int tmp(int n, int g)
{
	if (g * g == n)
	{
		return (g);
	}
	else
		if (g * g > n)
		{
			return (-1);
		}
		else
			return (tmp(n, g + 1));
}

/**
 * _sqrt_recursion - finds sqrt
 * @n: int num
 * Return:  int
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
		if (n == 0 || n == 1)
		{
			return (1);
		}
		else
		{
			return (tmp(n, 1));
		}
}
