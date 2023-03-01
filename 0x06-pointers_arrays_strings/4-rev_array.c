#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: array
 * @n: element
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int k;
	int s;

	for (k = 0; k < n--; k++)
	{
		s = a[k];
		a[k] = a[n];
		a[n] = s;
	}
}
