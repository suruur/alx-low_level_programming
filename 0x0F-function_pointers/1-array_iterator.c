#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - print name
 * @array: name
 * @size: p to function
 * @action: action
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
