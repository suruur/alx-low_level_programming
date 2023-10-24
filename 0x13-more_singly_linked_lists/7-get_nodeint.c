#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - print list
 * @head: int pointer
 * @index: int
 * Return: size_t
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;
	listint_t *current;


	count = 0;
	current = head;

	while (current != NULL)
	{
		if (count == index)
		{
			return (current);
		}
		current = current->next;
		count++;
	}

	return (NULL);
}
