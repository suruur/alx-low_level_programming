#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - print list
 * @head: int pointer
 * @index: index
 * Return: size_t
 */

int delete_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t count;


	count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
