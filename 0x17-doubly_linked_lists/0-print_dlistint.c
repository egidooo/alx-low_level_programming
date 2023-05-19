#include <stddef.h>
#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - function that prints all,
 * elements of dlistint list
 * @h: pointer
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t c_node = 0;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		c_node++;
	}
	return (c_node);
}
