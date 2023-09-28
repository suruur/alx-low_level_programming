#include "main.h"
/**
 * is_primee - tmp
 * @n: int
 * @d: int
 * Return: int
 */

int is_primee(int n, int d)
{
	if (n <= 1)
	{
		return (0);
	}
	else
		if (d == 1)
			return (1);

	if (n % d == 0)
		return (0);

	return (is_primee(n, n - 1));

}
/**
 * is_prime_number - checks if n is prime or not
 * @n: int length
 * Return:  int
 */

int is_prime_number(int n)
{
	return (is_primee(n, n - 1));
}
