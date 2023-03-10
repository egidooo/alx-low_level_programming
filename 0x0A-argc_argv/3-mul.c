#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main -  program that multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int k = 0;
	int n = 0;

	if (argc == 3)
	{
		k = atoi(argv[1]);
		n = atoi(argv[2]);
		printf("%d\n", k * n);
	}
	else
	{
		printf("error\n");
		return (1);
	}
	return (0);
}
