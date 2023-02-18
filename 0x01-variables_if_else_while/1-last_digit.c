#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main -m entry point of the program
 * Return: program returns to 0
 */

int main(void)
{
	int n, lstd;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lstd = n % 10;

	if (lstd > 5)
	{
		printf("the last digit of %d is %d and is greater than 5\n", n, lstd);
	}
	else if (lstd == 0)
	{
		printf("the last digit of %d is %d and is 0\n", n, lstd);
	}
	else if (lstd < 6 && lstd != 0)
	{
		printf("last digit of %d is %d and  less than 6 not 0\n", n, lstd);
	}
	return (0);
}
