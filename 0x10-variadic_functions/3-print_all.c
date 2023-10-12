#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
	int i;
	va_list args;
	char *ff;

	va_start(args, format);
	ff = malloc(strlen(format + 1));

	strcpy(ff, format);

	while (*ff)
	{
		if (*ff == 'c')
		{
			c = va_arg(args, int);
			printf("%c", c);
		}
		else
			if (*ff == 'i')
			{
				i = va_arg(args, int);
				printf("%d", i);
			}
			else
				if (*ff == 'f')
				{
					f = va_arg(args, double);
					printf("%f", f);
				}
				else
					if (*ff == 's')
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
		ff++;

		if (*ff)
		{
			printf(", ");
		}
	}

	va_end(args);
	printf("\n");
}
