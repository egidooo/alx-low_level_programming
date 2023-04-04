#include "lists.h"

/**
 * insert_nodeint_at_index -  function that inserts a new node
 * at a given position
 * @head: pointer to first node
 * @idx: index of the new added node
 * @n: new node in the list
 * Return: new node or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *temp = *head;
	unsigned int k;

	new_node = malloc(sizeof(listint_t));

	if (!new_node || !head)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
		for (k = 0; temp && k < idx; k++)
		{
			if (k == idx - 1)
			{
			new_node->next = temp->next;
			temp->next = new_node;
			return (new_node);
			}
		else
		temp = temp->next;
		}
		return (new_node);
}
