#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - print douly linked list
 * @head: pointer to the d list
 * @index: index
 * Return: number of nodes
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL && count < index)
	{
		head = head->next;
		count++;
	}

	if (head == NULL || count < index)
	{
		return (NULL);
	}
	else
	{
		return (head);
	}
}
