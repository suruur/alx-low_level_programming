#include "main.h"

/**
 * _isdigit - checks for a digit.
 * @c: formal parameter
 * Return: 1, 0
 */
int _isdigit(int c)
{
	int r;

	if (c >= '0' && c <= '9')
		r = 1;
	else
		r = 0;

	return (r);
}
