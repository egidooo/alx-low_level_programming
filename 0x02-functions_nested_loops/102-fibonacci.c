#include <stdio.h>
/**
 * main - program to print first 50 fibonacci
 * Return: returns to 0
 */

int main(void)
{

	int m = 0;
	long n = 1, o = 2;

	while (m < 50)
	{
	if (m == 0)
	printf("%ld", n);
	else if (m == 1)
	printf(", %ld", o);
	else
	{
	o +=  n;
	n = o - n;
	printf(", %ld", o);
	}
	++m;
	}
	printf("\n");
	return (0);
}
