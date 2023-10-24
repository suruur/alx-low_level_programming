#include <stdio.h>
#include "lists.h"

/**
 * listint_len - print list
 * @h: int pointer
 * Return: size_t
 */

size_t listint_len(const listint_t *h)
{
	size_t count;

	count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
