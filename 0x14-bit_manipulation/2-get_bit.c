#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number
 * @index: the index, starting from 0;
 * of the bit you want to get
 * Return: index or -1 if error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	return ((n & mask) ? 1 : 0);
}
