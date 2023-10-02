#include "main.h"
#include <stdlib.h>

/**
 * _strstr - concat string.
 * @haystack: string pointer
 * @needle: string
 * Return:  pointer
 */
char *_strstr(char *haystack, char *needle)
{
	char *hsp, *nd;

	hsp = haystack;
	nd = needle;

	if (*needle == '\0')
		return (haystack);

	while (*haystack != '\0')
	{
		while (*hsp != '\0' && *nd != '\0' && *hsp == *nd)
		{
			hsp++;
			nd++;
		}
		if (*nd == '\0')
			return (haystack);
		haystack++;
	}

	return (NULL);
}
