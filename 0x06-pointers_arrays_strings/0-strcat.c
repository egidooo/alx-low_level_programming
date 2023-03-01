#include "main.h"

/**
 * _strcat - function that concetenate two strings
 * @dest: string
 * @src: string
 * Return: desk
 */

char *_strcat(char *dest, char *src)
{
	int p;
	int k;

	p = 0;
	k = 0;

	while (dest[p] != '\0')
	{
		dest++;
	}
	while (src[k] != '\0')
	{
		dest[p] = src[k];
		p++;
		k++;
	}
	dest[p] = '\0';
	return (dest);
}
