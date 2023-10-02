#include <stdio.h>
#include <stdlib.h>

/**
 * minCo - claulate min
 * @cents: int
 * Return: int count
 */

int minCo(int cents)
{
	int num, count, i;

	int coins[] = {25, 10, 5, 2, 1};

	num = sizeof(coins) / sizeof(coins[0]);
	count = 0;

	for (i = 0; i < num; i++)
		while (cents >= coins[i])
		{
			cents -= coins[i];
			count++;
		}

	return (count);
}

/**
 * main - Entry point
 * @argc: args size
 * @argv: args list
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int re, cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
		printf("0\n");
	else
	{
		re = minCo(cents);
		printf("%d\n", re);
	}

	return (0);

}
