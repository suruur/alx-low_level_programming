#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char *msg = "and that piece of art is useful - DOra Korpar, 2015-10-19\n";

	write (STDERR_FILENO, msg, 54);
	return (1);
}
