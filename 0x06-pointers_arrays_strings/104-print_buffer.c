#include "main.h"
#include <stdio.h>

/**
 * print_buffer -  function that prints a buffer
 * @b: buffer
 * @size: size
 * Return: void
 */


void print_buffer(char *b, int size)
{
	int p;
	int j;
	int k;

	p = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (p < size)
	{
		j = size - p < 10 ? size - p : 10;
		printf("%08x: ", p);
		for (k = 0; k < 10; k++)
		{
			if (k < j)
				printf("%02x", *(b + p + k));
			else
				printf("  ");
			if (k % 2)
			{
				printf(" ");
			}
		}
		for (k = 0; k < j; k++)
		{
			int n = *(b + p + k);

			if (n < 32 || n > 132)
			{
				n = '.';
			}
			printf("%c", n);
		}
		printf("\n");
		p += 10;
	}
}
