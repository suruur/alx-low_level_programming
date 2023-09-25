#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * set_string - concat string.
 * @s: string s
 * @to: string to
 * Return:  void
 */
void set_string(char **s, char *to)
{
	char *newstr;

	if (s != NULL)
	{
		newstr = malloc(strlen(to) + 1);

		if (newstr != NULL)
			strcpy(newstr, to);

		*s = newstr;
	}

}
