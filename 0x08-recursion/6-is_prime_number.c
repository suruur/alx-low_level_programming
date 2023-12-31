#include "main.h"
/**
 * tmp - tmp
 * @n: int
 * @d: int
 * Return: int
 */

int tmp(int n, int d)
{
	if (n <= 1)
	{
		return (0);
	}
	else
		if (d == 1)
			return (0);

	if (d == 2)
		return ((n % 2 == 0) ? 1 : 0);

	if (n % d == 0)
		return (1);

	return (tmp(n, n - 1));

}
/**
 * is_prime_number - checks if n is prime or not
 * @n: int length
 * Return:  int
 */

int is_prime_number(int n)
{
	return (tmp(n, n - 1));
}
