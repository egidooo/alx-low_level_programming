#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: pointer
 * Return: nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t element = 0;

	while (h)
	{
		element++;
		h = h->next;
	}
	return (element);
}
