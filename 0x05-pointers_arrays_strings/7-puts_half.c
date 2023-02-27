#include "main.h"
/**
 * puts_half - function that prints half of the string
 * @str: string
 * Return: void
 */

void puts_half(char *str)
{
	int p = 0;
	int n;

	while (str[p] != '\0')
	{
		p++;
	}

	if (p % 2  == 1)
	{
		n = (p - 1) / 2;
		n += 1;
	}
	else
	{
		 n = p / 2;
	}
	for (; n < p; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
