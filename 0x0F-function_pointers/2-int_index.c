#include "function_pointers.h"

/**
 * int_index - print name
 * @array: name
 * @size: p to function
 * @cmp: p to f
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (size  <= 0)
		return (-1);
	int i;
	for ( i = 0; i < size; i++)
		if (cmp(array[i]) != 0)
			return (i);

	return (-1);

}
