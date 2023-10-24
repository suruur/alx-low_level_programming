#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * reverse_listint - print list
 * @head: int pointer
 * Return: size_t
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *current, *next_node;


	prev = NULL;
	current = *head;

	while (current != NULL)
	{
		next_node = current->next;
		current->next = prev;
		prev = current;
		current = next_node;
	}
	*head = prev;
	return (*head);
}
