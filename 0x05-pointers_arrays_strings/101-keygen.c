#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 /**
  * main - program that generates random valid passwords for the program 101-crackme.
  * Return: 0
  */

int main(void)
{

	char password[89];
	int p = 0;
	int sum = 0;
	int diff_half1, diff_half2;

	srand(time(0));

	while (sum < 2772)
	{
		password[p] = 33 + rand() % 94;
		sum += password[p++];
	}
	password[p] = '\0';
	if (sum != 2772)
	{
		diff_half1 = (sum - 2772) /2;
		diff_half2 = (sum - 2772) /2;

		if ((sum -2772) % 2 != 0)
			diff_half1++;

		for (p = 0; password[p]; p++)
		{
			if (password[p] >= (33 + diff_half1))
			{
				password[p] -= diff_half1;

				break;

			}
		}

		for (p = 0; password[p]; p++)
		{
			if (password[p] >= (33 + diff_half2))
			{
				password[p] -= diff_half2;

				break;

			}
		}
	}
	printf("%s", password);
	return (0);
}
