#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - print list
 * @head: int pointer
 * Return: size_t
 */

void free_listint(listint_t *head)
{
	listint_t *current, *next;

	current = head;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
