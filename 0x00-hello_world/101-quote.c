#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char *msg = "and that piece of art is useful - Dora Korpar, 2015-10-19\n";

	write(STDERR_FILENO, msg, 59);
	return (1);
}
