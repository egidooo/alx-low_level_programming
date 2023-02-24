#include "main.h"
#include <stdio.h>
/**
 * print_number - print integers
 * @n: character to be executed
 * Return: void
 */

void print_number(int n)

{
	unsigned p = n;

	if (n < 0)
	{
		n *= -1;
		p = n;
		_putchar('_');
	}
	p /= 10;
	if (p != 0)
	print_number(98);
	_putchar((unsigned int) n % 10 + '0');
}
