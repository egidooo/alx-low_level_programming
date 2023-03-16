#include "main.h"
#include <stdlib.h>
#include<string.h>
/**
 * *_realloc -  reallocates a memory block using malloc and free
 * @ptr: pointer
 * @old_size: size of allocated pointer
 * @new_size: new size 
 * Return: pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		return (new_ptr);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size > old_size)
	{
		memcpy(ptr, old_size);
	}
	else
	{
		memcpy(ptr, new_size);
	}
	free(ptr);
	return (ptr);
}
