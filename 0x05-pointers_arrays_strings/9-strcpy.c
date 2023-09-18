#include "main.h"
#include <string.h>
/**
 * _strcpy - copy string.
 * @dest: dest string
 * @src: src string
 * Return: copied string
 */

char * _strcpy(char *dest, char *src)
{
	int len;
	int i;

	len = strlen(src);

	for (i = 0; i < len && src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';


	return (dest);
}
