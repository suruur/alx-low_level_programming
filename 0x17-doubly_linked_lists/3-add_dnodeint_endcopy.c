#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * add_dnodeint_end - print douly linked list
 * @head: pointer to the d list
 * @n: count
 * Return: number of nodes
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *current;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		while (current->next != NULL)
		{
			current = current->next;
		}
		new_node->prev = current;
		current->next = new_node;
	}

	return (new_node);
}
