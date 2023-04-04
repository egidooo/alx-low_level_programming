#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index
 * of a listint_t linked list
 * @head: pointer to the node
 * @index: index to the deleted node
 * Return: 1 if success or -1 if fails
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *existing = NULL;
	unsigned int k = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

		while (k < index - 1)
		{
			if (!temp || !(temp->next))
				return (-1);
			temp = temp->next;
			k++;
		}
		existing = temp->next;
		temp->next = existing->next;
		free(existing);
		return (1);
}
