#include <stdlib.h>
#include"main.h"
/**
 * binary_to_uint - convert
 * @b: int
 * Return: int
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int res;

	i = 0;
	res = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '\0' && b[i] != '1')
		{
			return (0);
		}
		res = (res << 1) | (b[i] - '0');
		i++;
	}
	return (res);
}
