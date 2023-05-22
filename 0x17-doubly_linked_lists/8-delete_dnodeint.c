#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - function that delete the node
 * @head: pointer to pointer
 * @index: index
 * Return: 1 if success -1 if fails
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int k = 0;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		free(current);
		return (1);
	}
	while (current != NULL && k < index)
	{
		current = current->next;
		k++;
	}
	if (current == NULL)
	{
		return (-1);
	}
	if (current->prev != NULL)
	{
		current->prev->next = current->next;
	}
	if (current->next != NULL)
	{
		current->next->prev = current->prev;
	}
	free(current);
	return (1);
}
