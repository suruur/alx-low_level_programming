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
	print_array(array, 5); 

	char s1[98];
	char *ptr;

	ptr = _strcpy(s1, " First, solve the problem. Then, write the code\n");
	printf("%s", s1);
	printf("%s", ptr);
	char s[10] = "My School";
	printf("%s\n", s);
	rev_string(s);
	printf("%s\n", s);
	int nb;


	nb = _atoi("98");
	printf("%d\n", nb);
	nb = _atoi("-402");
	printf("%d\n", nb);
	nb = _atoi("---++++ -++ Sui - te -   402 #cisfun :");
	printf("%d\n", nb);*/
	/*
	char s1[98] = "Hello ";
	char s2[] = "World!\n";

	char *ptr;

	printf("%s\n", s1);
	printf("%s", s2);
	ptr = _strncat(s1, s2, 1);
	printf("%s", s1);
	printf("%s", s2);
	printf("%s", ptr);
	ptr = _strncat(s1, s2, 1024);
	printf("%s", s1);
	printf("%s", s2);
	printf("%s", ptr);*/
	char s1[] = "Hello";
	char s2[] = "World!";

	printf("%d\n", _strcmp(s1, s2));
	printf("%d\n", _strcmp(s2, s1));
	printf("%d\n", _strcmp(s1,s1));

	return (0);
}
