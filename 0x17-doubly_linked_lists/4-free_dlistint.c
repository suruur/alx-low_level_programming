#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * free_dlistint - print douly linked list
 * @head: pointer to the d list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *c, *n;

	c = head;

	while (c != NULL)
	{
		n = c->next;
		free(c);
		c = n;
	}
}
