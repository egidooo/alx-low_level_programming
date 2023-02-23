#include "main.h"
/**
 * more_numbers - prints 10 timesnumber from 0 t0 14
 * Return: return to 0
 */

void more_numbers(void)
{
	int k, m, n = 1;

	for (k = 0; k <= 9; k++)
	{
		for (m = 0; m <= 9; m++)
		{
			_putchar (m + '0');
		if (m == 9)
		{
			for (m = 0; m <= 4; m++)
			{
				_putchar(n + '0');
				_putchar(m + '0');
			}
		}
		}
		_putchar('\n');
	}
}
