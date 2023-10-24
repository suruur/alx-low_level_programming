#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - print list
 * @h: int pointer
 * Return: size_t
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *next;
	size_t count;


	count = 0;

	if (h == NULL || *h == NULL)
	{
		return (0);
	}
	current = *h;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		count++;
		current = next;
	}

	*h = NULL;
	return (count);
}
