#include <stdio.h>
/**
 * main - entry point of the program
 * Return: program returns to 0
 */

int main(void)
{
	int h;
	char lett;

	for (h = '0'; h <= '9'; h++)
		putchar(h);

	for (lett = 'a'; lett <= 'f'; lett++)
		putchar(lett);
	putchar('\n');

	return (0);
}
