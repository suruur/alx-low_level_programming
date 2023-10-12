#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_all - print name
 * @format: namei
 * @: p to function
 * Return: void
 */
void print_all(const char * const format, ...)
{

	char c;
	float f;
	char *s;
	char *nil = "(nil)";
	va_list args;

	int i = 0;

	va_start(args, format);

	while (format[i])
	{
		if (format[i] == 'c')
		{
			c = va_arg(args, int);
			printf("%c", c);
		}
		else
			if (format[i] == 'i')
			{
				i = va_arg(args, int);
				printf("%d", i);
			}
			else
				if (format[i] == 'f')
				{
					f = va_arg(args, double);
					printf("%f", f);
				}
				else
					if (format[i] == 's')
					{
						s = va_arg(args, char *);
						if (s == NULL)
						{
							printf("%s", nil);
						}
						else
						{
							printf("%s", s);
						}
					}
		i++;

		if (*format)
		{
			printf(", ");
		}
	}

	va_end(args);
	printf("\n");
}
