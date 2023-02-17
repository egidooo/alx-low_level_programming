#include <stdio.h>
/**
 * main - program entry point
 * Return: program return to 0
 */

int main(void)
{
	int lower;

	for (lower = 'z'; lower >= 'a'; lower--)
		putchar(lower);
	putchar('\n');

	return (0);
}
