#include <stdio.h>
/**
 * ispal - is pal
 * @number: int
 * Return: int
 */
int ispal(int number)
{
	int oN = number;
	int rN = 0;

	while (number > 0)
	{
		rN = rN * 10 + number % 10;
		number /= 10;
	}

	return (number);
}
/**
 * main - entry point
 * Return: 0 s
 */
int main(void)
{
	int maxP = 0;
	int i, j, p;

	for (i = 100; i < 1000; i++)
	{
		for (j = 100; j < 1000; j++)
		{
			p = i * j;
		}

		if (ispal(p) && p > maxP)
		{
			maxP = p;
		}
	}

	FILE *file = fopen("102-result", "w");

	if (file != NULL)
	{
		fprintf(file, "%d", maxP);
		fclose(file);
	}
	return (0);
}
