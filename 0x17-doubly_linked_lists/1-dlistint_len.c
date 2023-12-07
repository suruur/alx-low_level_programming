#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * dlistint_len - print douly linked list
 * @h: pointer to the d list
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes_count = 0;

	while (h != NULL)
	{
		nodes_count++;
		h = h->next;
	}

	return (nodes_count);
}
