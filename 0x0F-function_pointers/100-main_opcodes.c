#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: args
 * @argv: val
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int i, num_b;
	unsigned char *ptr;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num_b = atoi(argv[1]);

	if (num_b < 0)
	{
		printf("Error\n");
		return (2);
	}


	ptr = (unsigned char *)main;

	for (i = 0; i < num_b; i++)
		printf("%02dx ", ptr[i]);

	printf("\n");

	return (0);
}
