#include "main.h"
#include <stdlib.h>

int issp(char c)
{
	return (( c == ' ' || c == '\t' || c == '\n' || c == '\r'));
}
/**
 * strtow- creates array
 * @str: array size
 * Return: array
 */
char **strtow(char *str)
{
	int nw, n, i;

	nw = 0;
	n = 0;

	if (str == NULL || str == '\0')
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		if (!issp(str[i]))
		{
			if (!n)
			{
				n++;
				nw++;
			}
		else
		{
			n = 0;
		}
	if (nw == 0)
		return (NULL);
	char 


	return (arr);
}
