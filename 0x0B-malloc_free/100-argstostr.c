#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - creates array
 * @ac: array size
 * @av: first char
 * Return: array
 */
char *argstostr(int ac, char **av)
{
	int t, i, cp;
	char *res;

	t = 0;
	cp = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	else
		for (i = 0; i < ac; i++)
		{
			t += strlen(av[i]) + 1;
		}

	res = (char *)malloc(t + 1);

	if (res == NULL)
		return (NULL);
	else
		for (i = 0; i < ac; i++)
		{
			 strcpy(res + cp, av[i]);
		 	cp += strlen(av[i]);
			 res[cp] = '\n';
		 	cp++;
		}

	res[t] = '\0';

	return (res);
}
