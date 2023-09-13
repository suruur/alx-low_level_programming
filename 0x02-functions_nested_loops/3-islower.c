#include "main.h"

/**
* _islower - a function that checks for lowercase character
* @c: number to be checked
* Return: 1, 0
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
