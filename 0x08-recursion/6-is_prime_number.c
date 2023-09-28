#include "main.h"
#include <math.h>
/**
 * tmp - tmp
 * @n: int
 * @d: int
 * Return: int
 */

int tmp(int n, int d)
{
	if (d <= 1)
		return (0);

	if (n % d == 0)
		return (1);

	return (tmp(n, d - 1));
}
/**
 * is_prime_number - checks if n is prime or not
 * @n: int length
 * Return:  int
 */

int is_prime_number(int n)
{
	int max;

	if (n <= 1)
		return (0);

	max = (int)sqrt(n);
	return (!tmp(n, max));
}
