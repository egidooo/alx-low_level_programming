#include <stdio.h>
/**
 * main - program to print first 50 fibonacci
 * Return: returns to 0
 */

int main(void)
{
	int l;
	long r = 1, n = 2;

	while (l < 50)
	{
	if (l == 0)
	printf("%ld", r);
	else if (l == 1)
	printf(", %ld", n);
	else
	{	
	n = n + r;
	r = n - r;
	printf(", %ld", n);
	}
	l++;
	}
	printf("\n");
	return (0);
}
