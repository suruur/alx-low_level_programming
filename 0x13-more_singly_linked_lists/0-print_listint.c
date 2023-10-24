#include <stdio.h>
#include "lists.h"

/**
 * print_listint - print list
 * @h: int pointer
 * Return: size_t
 */

size_t print_listint(const listint_t *h)
{
	size_t count;


	count = 0;

	while (h != NULL)
	{
		printf("%d", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
