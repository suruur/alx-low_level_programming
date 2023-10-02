#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * main - Entry point
 * @argc: args size
 * @argv: args list
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	int sum;
	int i;

	sum = 0;

	if (argc > 1)
	{
		for (i = 0; i < argc; i++)
			if (atoi(argv[i]) >= 0)
			{

				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		printf("%d\n", sum);
	}
	else
		printf("%d\n", 0);

	return (0);
}
