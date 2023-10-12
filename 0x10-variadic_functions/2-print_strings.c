#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - print name
 * @separator: name
 * @n: n
 * @: p to function
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	const char *str;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, const char *);

		if (str != NULL)
		{
			printf("%s", str);
		}
		else
		{
			printf("(ni)");
		}

		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	printf("\n");

	va_end(args);
}
