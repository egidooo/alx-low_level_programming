#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: pointer to node 1
 * Return: pointer
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *existing = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = existing;
		existing = *head;
		*head = next;
	}
	*head = existing;
	return (*head);
}
