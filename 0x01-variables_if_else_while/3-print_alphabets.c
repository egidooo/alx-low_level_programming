#include <stdio.h>
/**
 * main - program that prints alphabet in lower and uper case
 * Return: program return 0
 */
int main(void)
{
	int p;

	for (p = 'a'; p <= 'z'; p++)
		putchar(p);
	for (p = 'A'; p <= 'Z'; p++)
		putchar(p);
	putchar('\n');
	return (0);
}
