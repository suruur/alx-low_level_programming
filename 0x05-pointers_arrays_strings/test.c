#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	/*char c; */


	/* c = '0';
	printf("%c: %d\n", c, _isdigit(c));
	c = 'a';
	printf("%c: %d\n", c, _isdigit(c)); 
	printf("%d\n", mul(98, 1024));
	printf("%d\n", mul(-402, 4096)); */
	/*
	print_number(98);
	print_number(402);
	print_number(1024);
	print_number(0);
	print_number(-98); 


	more_numbers();*/
	int a;
	int b;

	a = 98;
	b = 42;

	printf("a=%d, b=%d\n", a, b);
	swap_int(&a, &b);
	printf("a=%d, b=%d\n", a, b);

	return (0);
}
