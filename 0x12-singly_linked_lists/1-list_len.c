#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * list_len - print list
 * @h: int pointer
 * Return: size_t
 */

size_t list_len(const list_t *h)
{
	size_t count;
	list_t *current;


	count = 0;
	current = (void *)h;

	while (current != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
