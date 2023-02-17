#include <stdio.h>
/**
 * main - entry point of the program
 * Return: the program returns to 0
 */

int main(void)
{
	int r, j;

	for (r = '0'; r < '9'; r++)
	{
		for (j = r + 1; j <= '9'; j++)
		{
			if (r != j)
			{
				putchar(r);
				putchar(j);
				if (r == '8' && j == '9')
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
