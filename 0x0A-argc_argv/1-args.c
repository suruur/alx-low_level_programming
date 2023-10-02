#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: args size
 * @argv: args list
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	if (argv)
		printf("%d\n", argc - 1);
	
	return (0);
}
