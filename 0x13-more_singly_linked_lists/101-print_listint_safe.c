#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - print list
 * @head: int pointer
 * Return: size_t
 */

size_t print_listint_safe(const listint_t *head)
{
	listint_t *current;
	size_t count;


	count = 0;
	current = (void *)head;

	while (current)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		count++;

		if (current >= current->next)
		{
			printf("-> [%p] %d\n", (void *)current->next, current->next->n);
			exit(98);
		}
		current = current->next;
	}

	return (count);
}
