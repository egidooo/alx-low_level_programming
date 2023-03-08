#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: string
 * Return: 1 if string is palindrome and 0 if not
 */

int is_palindrome(char *s)
{
	int i, j, len;

	len = strlen(s);

	for (i = 0, j = len - 1; i < len / 2; i++, j--)
	{
		if (s[i] != s[j])
		{
			return (0);
		}
	}
	return (1);
}
