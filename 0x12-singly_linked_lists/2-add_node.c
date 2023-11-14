#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - print list
 * @head: int pointer
 * @str: string
 * Return: size_t
 */

list_t add_node(list_t **head, const char *str)
{t5.
	if (str == NULL)
		return (NULL);

	new_node = (list_t *)malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
