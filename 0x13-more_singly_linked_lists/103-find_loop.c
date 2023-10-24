#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * find_listint_loop - print list
 * @head: int pointer
 * Return: size_t
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *to, *ha;

	if (head == NULL || head->next == NULL)
	{
		return (NULL);
	}
	to = head;
	ha = head;

	while (ha != NULL && ha->next != NULL)
	{
		to = to->next;
		ha = ha->next;
		if (to == ha)
		{
			to = head;

			while (to != ha)
			{
				to = to->next;
				ha = ha->next;
			}
			return (to);
		}
	}
	return (NULL);
}
