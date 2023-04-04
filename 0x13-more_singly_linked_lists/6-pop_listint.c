#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n)
 * @head: pointer
 * Return: deleted node
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data_del;

	if (head == NULL || *head == NULL)
		return (0);
	data_del = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (data_del);
}
