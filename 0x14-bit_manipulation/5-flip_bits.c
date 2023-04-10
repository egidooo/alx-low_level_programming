#include "main.h"

/**
 * flip_bits -  returns the number of bits you would need to,
 * flip to get from one number to another
 * @n: number 1
 * @m: number 2
 * Return: return to the flipped bit
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip = n ^ m;
	unsigned long int position = 0;

	while (flip > 0)
	{
		if (flip & 1)
		{
			position++;
		}
		flip >>= 1;
	}
	return (position);
}
