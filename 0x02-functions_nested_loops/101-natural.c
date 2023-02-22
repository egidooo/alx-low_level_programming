#include <stdio.h>
/**
 * main - program to compute multiples of 3 or 5
 * Return: return to 0
 */

int main(void)
{
	int p, k = 0;

	while (p < 2024)
	{
		if ((p % 3 == 0) || (p % 5 == 5))
		{
			k = k + 1;
		}
	p++;
	}
	printf("%d\n", k);
	return (0);
}
