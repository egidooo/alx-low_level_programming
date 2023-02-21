#include "main.h"
/**
 *  _abs - program to execute absolute value of a number
 * @k: character to be executed
 * Return: return to absolute value of number or 0
 */

int _abs(int k)
{
	int absolute;

	absolute = k * -1;

	if (k < 0)
		return (absolute);
	return (0);
}
