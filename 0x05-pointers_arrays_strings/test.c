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


	more_numbers();
	int a;
	int b;

	a = 98;
	b = 42;

	printf("a=%d, b=%d\n", a, b);
	swap_int(&a, &b);
	printf("a=%d, b=%d\n", a, b); *
	char *str;*/

	/*str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
	print_rev(str);
	str = "0123456789";

	puts_half(str);
	int array[5];

	array[0] = 98;
	array[1] = 402;
	array[2] = -198;
	array[3] = 298;
	array[4] = -1024;
	print_array(array, 5); */

	char s1[98];
	char *ptr;

	ptr = _strcpy(s1, " First, solve the problem. Then, write the code\n");
	printf("%s", s1);
	printf("%s", ptr);



	return (0);
}
