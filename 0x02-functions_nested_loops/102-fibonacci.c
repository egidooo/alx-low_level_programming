#include <stdio.h>
/**
 * main - program to print first 50 fibonacci
 * Return: returns to 0
 */

int main(void)
{
	int c;
	int k = 50;
	long a = 1;
	long b = 2;

	for (c = 1; c <= (k / 2); c++)
	{
		printf("%li %li ", a, b);
		a += b;
		b += a;
	}
	if (k % 2 == 1)
		printf("%li", a);

	printf("\n");

	return (0);
}
