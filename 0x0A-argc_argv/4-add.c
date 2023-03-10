#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main -  program that adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int k;
	unsigned int p, sum = 0;
	char *n;

	if (argc > 1)
	{
		for (k = 1; k < argc; k++)
		{
			n = argv[k];
			for (p = 0; p < strlen(n); p++)
			{
				if (n[p] < 48 || n[p] > 57)
				{
					printf("error\n");
					return (1);
				}
			}
			sum += atoi(n);
			n++;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
