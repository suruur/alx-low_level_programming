#include "main.h"
#include <stdlib.h>
#include <string.h>

int countW(char *str)
{
	int c, isW;

	c = 0;
	isW =0;

	while (*str)
	{
		if (*str == ' ')
		{
			isW = 0;
		}
		else
			if (!isW)
			{
				isW = 1;
				c++;
			}
		str++;
	}

	return (c);
}

void freeW(char **words)
{
	int i;

	if(words)
	{
		for (i = 0; words[i]; i++)
		{
			free(words[i];
		}
		free(words);
	}
}

/**
 * strtow- creates array
 * @str: array size
 * Return: array
 */
char **strtow(char *str)
{
	int nW, wI, wS, wL;

	nW = countW(str);
	wL = 0;
	wS = 0;
	wI = 0;

	char **words = (char **)malloc((nW + 1) * sizeof(char *));

	if (words == NULL)
		return (NULL);

	if (str == NULL || *str == '\0')
		return (NULL);

	for (i = 0; i < str[i]; i++)
	{
		if (str[i] == ' ')
		{
			if (wL > 0)
			{
				words[wI] = (char *)malloc((wL + 1) * sizeof(char *));
				
				if (words[wI] == NULL)
				{
					freeW(words);
					return (NULL);
				}
				strncpy(words[wI], &str[wS], wL);
				words[wI][wL] = '\0';
				wL++;
			}
		}
		else
		{
			if (wL == 0)
			{
				wS = i;
			}
			wL++;
		}
		if (wL > 0)
		{
			words[wI] = (char *)malloc((wL + 1) * sizeof(char *));

			if (words == NULL)
			{
				freeW(words);
				return (NULL);
			}
			strncpy(words[wI], &str[wS], wL);
			words[wI][wL] = '\0';
			wI++;
		}
		words[wI] = NULL;
	
		return (NULL);
}
