#include "main.h"
/**
 * _strcmp -  function that compares two strings
 * @s1: string1
 * @s2: string2
 * Return: result
 */

int _strcmp(char *s1, char *s2)
{       
        int p;
        
        for (p = 0; s1[p] == s2[p]; p++)
	{
		if (s1[p] == '\0')
		{
			return 0;
		}
	}
	return (s1[p] - s2[p]);
}
