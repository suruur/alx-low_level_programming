#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	printf("Size of a char: %lu\n", sizeof(char), " byte(s)");
	printf("Size of an int: %lu\n", sizeof(int), " byte(s));
	printf("Size of a long long:%lu\n", sizeof(long long), " byte(s)");
	printf("Size of a float:%lu\n", sizeof(float), " byte(s)");
	return (0);
}
