#include "main.c"
/**
 * _strlen - function to print length of a string
 * @str: string 
 * Return: string
 */

size_t _strlen(const char *str)
{
	size_t leng = 0;

	while(*str++)
		leng++;
	return (leng);
}
