#include <stdlib.h>
#include "lists.h"

/**
 * sum_dlistint - returns the sum of data in dlistint_t list
 * @head: pointer
 * Return: sum
 */

int sum_dlistint(dlistint_t *head)
{
	int sum;
	dlistint_t *current;

	sum = 0;
	current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
