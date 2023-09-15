#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	long long maxp = -1;
	long long n = 612852475143;

	while (n % 2 == 0)
	{
		maxp = 2;
		n /= 2;
	}

	for (long long i = 3; i * i <= n; i += 2)
	{
		while (n % 2 == 0)
		{
			maxp = i;
			n /= i;
		}
	}

	if (n > 2)
		maxp = 2;

	printf("%lld\n", maxp);

	return (0);
}
