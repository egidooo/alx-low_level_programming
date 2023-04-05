#include "lists.h"

/**
 * free_listint_safe - function that frees a listint_t list
 * @h: pointer
 * Return: size that was free'd
 */

size_t free_listint_safe(listint_t **h)
{
	size_t fre;
	int k;
	listint_t *temp;

	if (h == NULL || *h == NULL)
		return (0);

	while (*h)
	{
		k = *h - (*h)->next;
		if (k > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			fre++;
		}
		else
		{
			free(*h);
			*h = NULL;
			fre++;
			break;
		}
	}
	*h = NULL;
	return (fre);
}

