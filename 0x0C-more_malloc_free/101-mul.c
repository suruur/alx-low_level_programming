#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 * mull - multiply
 * @n1: number 1
 * @n2: number 2
 * Return: ptr
 */

char *mull(char *n1, char *n2)
{
	int l1, l2, l3, c, i, j, tmp;
	char *res;

	l1 = strlen(n1);
	l2 = strlen(n2);
	l3 = l1 + l2;

	res = (char *)malloc(l3 + 1);

	if (res == NULL)
	{
		exit(1);
	}

	for (i = 0; i < l3; i++)
		res[i] = '0';

	res[l3] = '\0';


	for (i = l1 - 1; i >= 0; i--)
	{
		c = 0;
		for (j = l2 - 1; j >= 0; j--)
		{
			tmp = (n1[i] - '0') * (n2[j] - '0') + (res[i + j + 1] - '0') + c;
			res[i + j + 1] = (tmp % 10) + '0';
			c = tmp / 10;
		}
		res[i] += c;
	}

	return (res);
}

/**
 * main - Entry point
 * @argc: len
 * @argv: vals
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int i;
	char *num1, *num2, *res;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	num1 = argv[1];
	num2 = argv[2];

	for (i = 0; num1[i]; i++)
	{
		if (!isdigit(num1[i]))
		{
			printf("Error\n");
			return (98);
		}
	}
	for (i = 0; num2[i]; i++)
		if (!isdigit(num2[i]))
		{
			printf("Error\n");
			return (98);
		}

	res = mull(num1, num2);
	printf("%s\n", res);
	free(res);

	return (0);
}
