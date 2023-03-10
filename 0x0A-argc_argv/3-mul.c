#include "main.h"
#include <stdio.h>

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
	int pp;

	if (argc == 3)
	{
		k = pp(argv[1]);
		n = pp(argv[2]);
		printf("%d\n", k * n);
	}
	else
	{
		printf("error\n");
		return (1);
	}
	return (0);
}
