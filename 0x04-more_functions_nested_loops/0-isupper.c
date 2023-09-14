#include "main.h"

/**
 * _isupper - a function that checks if the letter is upper or not.
 *@c: char
 * Return: 1, 0 
 */
int _isupper(int c)
{
	int r;

	if (c >= 'A' && c =< 'Z')
		r = 1;
	else
		r = 0;

	return (r);
}
