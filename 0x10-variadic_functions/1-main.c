#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * main - Entry point
 * @argc: size
 * @argv: values
 *
 * Return: 0 if success, 98, 99, something esle otherwise..
 */

int main(void)
{
	print_numbers(", ", 4, 0, 98, -1024, 402);
	return (0);
}
