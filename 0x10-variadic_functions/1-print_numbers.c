#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_number - print name
 * @separator: sep
 * @n: name
 * @: p to function
 * Return: void
 */
void print_number(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
		printf("%d", num);

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}

	va_end(args);

	printf("\n");
}
