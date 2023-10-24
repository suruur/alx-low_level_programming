#include <stdio.h>
#include "lists.h"

/**
 * print_list - print list
 * @h: int pointer
 * Return: size_t
 */

size_t print_list(const list_t *h)
{
	size_t count;


	count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("%s\n", h->str);
		}
		h = h->next;
		count++;
	}

	return (count);
}
