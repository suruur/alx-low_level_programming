#include "main.h"
/**
* _isalpha - a function that checks for alphabetic character.
* @c: character to be checked
* Return: 1, 0
*/
int _isalpha(int c)
{
	int r;
	if (c >= 'a' && c <= 'z')
		r = 1;
	else
		if (c >= 'A' && c <= 'Z')
			r = 1;
		else
			r = 0;
	return (r);
}
