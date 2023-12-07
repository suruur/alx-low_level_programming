#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - print douly linked list
 * @head: pointer to the d list
 * @index: index
 * Return: number of nodes
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *c, *temp;

	unsigned int count = 0;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;

		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		free(temp);
		return (1);
	}

	while (c != NULL && count < index)
	{
		c = c->next;
		count++;
	}

	if (c == NULL || count < index)
	{
		return (-1);
	}

	c->prev->next = c->next;

	if (c->next != NULL)
	{
		c->next->prev = c->prev;
	}
	free(c);
	return (1);
}
