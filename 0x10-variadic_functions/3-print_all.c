#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_all - print name
 * @format: name
 * @: p to function
 * Return: void
 */
void print_all(const char * const format, ...)
{
	char c;
	int i;
	float f;
	char *s;
	va_list args;

	va_start(args, format);

	while (*format)
	{
		if (*format == 'c')
		{
			c = va_arg(args, int);
			printf("%c", c);
		}
		else
			if (*format == 'i')
			{
				i = va_arg(args, int);
				printf("%d", i);
			}
			else
				if (*format == 'f')
				{
					f = va_arg(args, double);
					printf("%f", f);
				}
				else
					if (*format == 's')
					{
						s = va_arg(args, char *);
						if (s == NULL)
						{
							printf("(nil)");
						}
						else
						{
							printf("%s", s);
						}
					}
		format++;

		if (*format)
		{
			printf(", ");
		}
	}

	va_end(args);
	printf("\n");
}
