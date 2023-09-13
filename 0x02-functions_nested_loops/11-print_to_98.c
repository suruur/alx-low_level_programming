#include "main.h"
#include <stdi

/* print_to_98 - a function that prints all natural numbers from n to 98,
 * followed by a new line.
 * @n : start number
 * Return: void
 */
void print_to_98(int n)
{
	in i;
	
	for (i = n; i <= 98; i++) 
	{
        	printf("%d", i);
        	if (i != 98)
            		printf(", ");
       		 else
			printf("\n");
          }
}
