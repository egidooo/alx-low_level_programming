#include <stdio.h>
/**
 * main - program that prints alphabet in lower case
 * Return: program returns to 0
 */
int main(void)
{
	char p;

	for (p = 'a'; p <= 'z'; p++)
		putchar(p);
	putchar('\n');
	return (0);
}
