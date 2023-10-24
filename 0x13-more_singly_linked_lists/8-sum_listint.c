#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - print list
 * @head: int pointer
 * Return: size_t
 */

int sum_listint(listint_t *head)
{
	int sum;


	sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
