#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - print list
 * @head: int pointer
 * @index: index
 * Return: size_t
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *tmp, *prev;
	unsigned int i;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
		return (1);
	}
	current = *head;
	prev = NULL;

	for (i = 0; i < index; i++)
	{
		if (current->next == NULL)
		{
			return (-1);
		}
		prev = current;
		current = current->next;
	}
	prev->next = current->next;
	free(current);
	return (1);
}
