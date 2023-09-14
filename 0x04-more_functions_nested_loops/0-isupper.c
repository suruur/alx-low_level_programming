#include "main.h"

/**
 * _isupper - checks for upper case characters.
 * @c: char
 * Return: 1, 0 
 */
int _isupper(int c)
{
	int r;

	if (c >= 'A' && c <= 'Z')
		r = 1;
	else
		r = 0;

	return (r);
}
