#include "main.h"
/**
 * tmp - temp func
 * @n: int
 * @start: int
 * @end: int
 * Return: int
 */

int tmp(int n, int start, int end)
{
	int mid;
	long sq;

	if (start > end)
		retrun(-1);

	mid = start + (end - start) / 2;
	sq = mid * mid;

	if (sq == n)
	{
		return (n);
	}
	else
		if (sq < n)
			return (tmp(n, mid + 1, end));
		else
			return (tmp(n, start, mid - 1));

}

/**
 * _sqrt_recursion - finds sqrt
 * @n: int num
 * Return:  int
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (tmp(n, 0, n));
}
