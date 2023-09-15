#include "main.h"
#include <stdio.h>
/**
 * more_numbers - prints numbers for 0 to 14
 *
 * Return: void
 */
void more_numbers(void)
{
	int i;
	int j = 0;

	while (j < 10)
	{
		for (i = 0; i <= 14; i++)
			if (i > 9)
			{
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
			}
			else
				_putchar(i + '0');
		j++;
		printf("\n");
	}
}
