#include "main.h"
#include <stdio.h>
/**
 * print_array - function to print n element of an array
 * @a: array
 * @n: number of elements
 */

void print_array(int *a, int n)
{
	int p;

	for (p = 0; p < n; p++)
	{
		printf("%d", a[p]);
		if (p != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
