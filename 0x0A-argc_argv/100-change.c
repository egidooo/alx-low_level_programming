#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _atoi -  program that prints the minimum number of coins to
 *  make change for an amount of money
 * @argc: number of arguments
 * @argv: pointer
 * Return: exactly 1 and 0 otherwise
 */

int _atoi(int argc, char *argv[])
{
	int cents, coins = 0;

	if (argc != 2)
	{
		printf("error\n");
		return (1);
	}
	cents = atoi(argv[1]);

	while (cents > 0)
	{
		coins++;
		if ((cents - 25) >= 0)
		{
			cents -= 25;
			continue;
		}
		if ((cents - 10) >= 0)
		{
			cents -= 10;
			continue;
		}
		if ((cents - 5) >= 0)
		{
			cents -= 5;
			continue;
		}
		if ((cents -2) >= 0)
		{
			cents -= 2;
			continue;
		}
		cents--;
	}
	printf("%d\n", coins);
	return (0);
}
