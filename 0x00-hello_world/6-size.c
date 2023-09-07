#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	printf("Size of a char: %lu\n", sizeof(char));
	printf("Size of an int: %lu\n", sizeof(int));
	printf("Size of a long long:%lu\n", sizeof(long long));
	printf("Size of a float:%lu\n", sizeof(float));
	printf("Size of a double:%lu\n", sizeof(double));
	printf("Size of a long:%lu\n", sizeof(long));
	printf("Size of a pointer:%lu\n", sizeof(void*));
	return (0);
}
