#include "main.h"
/**
 * _strcpy - program to copy a string
 * @dest: destination
 * @src: origin
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int p;

	for (p = 0; src[p] != '\0'; p++)
	{
		dest[p] = src[p];
	}
	dest[p++] = '\0';
	return (dest);
}
