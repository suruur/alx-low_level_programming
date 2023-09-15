#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	long maxp = -1;
	long n = 612852475143;
	long i;

	while (n % 2 == 0)
	{
		maxp = 2;
		n /= 2;
	}

	for (i = 3; i * i <= n; i += 2)
	{
		while (n % 2 == 0)
		{
			maxp = i;
			n /= i;
		}
	}

	if (n > 2)
		maxp = 2;

	printf("%ld\n", maxp);

	return (0);
}
