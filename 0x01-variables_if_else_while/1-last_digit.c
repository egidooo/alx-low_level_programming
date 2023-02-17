#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - program that check if number is greater or less to 5
 * Return: program return to 0
 */

int main(void)
{
	int n, lstd;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lstd = n % 10;

	if (lstd > 5)
	{
		printf("last digit of %d is %d and is greater than 5\n", n, lstd);
	}
	else if (lstd == 0)
	{
		printf("last digit of %d id %d and is 0\n", n, lstd);
	}
	else if (lstd < 6 && lstd != 0)
	{
		printf("last digit of %d is %d and is less than 6 and not 0\n", n, lstd);
	}
	return (0);
}
