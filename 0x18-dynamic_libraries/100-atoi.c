#include "main.h"
/**
 * _atoi - function that converts string to an integer
 * @s: pointer
 * Return: integer
 */

int _atoi(char *s)
{
	int p = 0;
	unsigned int k = 0;
	int m = 1;
	int q = 0;

	while  (s[p])
	{
		if (s[p] == 45)
		{
			m *= -1;
		}
		while (s[p] >= 48 && s[p] <= 57)
		{
			q = 1;
			k = (k * 10) + (s[p] - '0');
			p++;
		}
		if (q == 1)
		{
			break;
		}
		p++;
	}
	k *= m;
	return (k);
}
