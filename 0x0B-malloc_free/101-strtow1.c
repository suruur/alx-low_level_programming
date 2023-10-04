#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * strtow- creates array
 * @str: array size
 * Return: array
 */
char **strtow(char *str)
{
	int nw, n, i, wl;
	char *tmp;
	char **words;

	nw = 0;
	n = 0;
	tmp = str;

	if (str == NULL || *str == '\0')
		return (NULL);

	while (*tmp != '\0')
	{
		while (*tmp == ' ')
		{
			tmp++;
		}
		if (*tmp != '\0')
		{
			nw++;
		}
		while (*tmp != ' ' && *tmp != '\0')
		{
			tmp++;
		}
	}
	words = (char **)malloc((nw + 1) * sizeof(char *));

	if (words == NULL)
		return (NULL);
	tmp = str;

	while (*tmp != '\0')
	{
		while (*tmp == ' ')
		{
			tmp++;
		}
		if (*tmp != '\0')
		{
			char *ws = tmp;

			while (*tmp != ' ' && *tmp != '\0')
			{
				tmp++;
			}
			wl = tmp - ws;

			words[n] = (char *)malloc((wl + 1) * sizeof(char));

			if (words[n] == NULL)
			{
				for (i = 0; i < n; i++)
					free(words[i]);
				free(words);
				return (NULL);
			}
			strncpy(words[nw], ws, wl);
			words[nw][wl] = '\0';
			nw++;
		}
	}
	words[n] = NULL;

	return (words);

}
