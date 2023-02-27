#include "main.h"
/**
 * print_rev - prints string in reverse
 * @s: string
 * Return: void
 */

void print_rev(char *s)
{
	int leng = 0;
	int p;

	while (*s != '\0')
	{
		leng++;
		s++;
	}
	for (p = leng; p >= 0; p--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}

