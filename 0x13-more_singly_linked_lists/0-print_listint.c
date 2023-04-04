#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t lis
 * @h: list to be printed
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t element = 0;

	while (h)
	{
		printf("%d\n", h->n);
		element++;
		h = h->next;
	}
	return (element);
}
