#include "lists.h"

/**
 * print_listint_safe - function that prints a listint_t linked list
 * @head: pointer
 * Return: number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	int p;
	size_t k;

	if (head == NULL)
		exit(98);

	while (head)
	{
		p = head - head->next;
		k++;
		printf("[%p] %d\n", (void *)head, head->n);

		if (p > 0)
		{
			head = head->next;
		}
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}
	return (k);
}
