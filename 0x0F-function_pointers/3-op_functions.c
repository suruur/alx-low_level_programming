#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - eturn the sum
 * @a: a
 * @b: b
 * Return: Sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Sub
 * @a: a
 * @b: b
 * Return : SUB
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Mul
 * @a: a
 * @b: b
 * Return: MULL
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Div
 * @a: a
 * @b: b
 * Return: DIV
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Mod
 * @a: a
 * @b: b
 * Return: MOD
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
