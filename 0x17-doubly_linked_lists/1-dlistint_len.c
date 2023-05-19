#include <stddef.h>
#include "lists.h"

/**
 * dlistint_len - function that returns the number,
 * of elements in the list
 * @h: pointer
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t c_node = 0;

	while (current != NULL)
	{
		c_node++;
		current = current->next;
	}
	return (c_node);
}
