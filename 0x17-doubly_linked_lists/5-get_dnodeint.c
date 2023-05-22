#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node in the linked list
 * @head: pointer
 * @index: node
 * Return: NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;

	while (current != NULL && index > 0)
	{
		current = current->next;
		index--;
	}

	if (current != NULL && index == 0)
	{
		return (current);
	}
	else
	{
		return (NULL);
	}
}
