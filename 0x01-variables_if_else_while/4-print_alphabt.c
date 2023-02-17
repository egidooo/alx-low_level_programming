#include <stdio.h>
/**
 * main -m program that prints lower case alphabet except e and q
 * Return: program returns to 0
 */
int main(void)
{
	char p, e, q;

	e = 'e';
	q = 'q';

	for (p = 'a'; p <= 'z'; p++)
	{
		if (p != e && p != q)
		putchar(p);
	}
		putchar('\n');
return (0);
}
