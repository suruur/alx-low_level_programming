#include "main.h"
#include <stdio.h> 

/**
 * print_to_98 - a function that prints all natural numbers from n to 98,
 * followed by a new line.
 * @n : start number
 * Return: void
 */

void print_to_98(int n)
{
	if ( n == 98)
		printf("%d\n", n);
	else
	{
		int i = n;
	
		while(i != 98)
		{
        		printf("%d", i);
        		if (i != 98)
            			printf(", "); 
			

			if ( i < 98)
				i++;
			else
				i--;
          		
		}
		printf("%d\n", 98);
	}
}
