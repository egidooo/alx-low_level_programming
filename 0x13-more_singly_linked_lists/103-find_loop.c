#include "lists.h"

/**
 * find_listint_loop - function that finds the loop in a linked list
 * @head: pointer
 * Return: The address of the node where the loop starts
 * or NULL if there is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *lp = head;
	listint_t *kk = head;

	if (head == NULL || head->next == NULL)
		return (NULL);
	kk = kk->next;
	lp = lp->next->next;

	while (lp && lp->next)
	{
		if (kk == lp)
		{
			kk = head;
			while (kk != lp)
			{
				lp = lp->next;
				kk = kk->next;
			}
			return (kk);
		}
		kk = kk->next;
		lp = lp->next->next;
	}
	return (NULL);
}
