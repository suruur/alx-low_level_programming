#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - print list
 * @head: int pointer
 * Return: size_t
 */

int sum_listint(listint_t *head)
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
