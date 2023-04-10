#include "main.h"
#include <string.h>

/**
 * create_file -  function that creates a file
 * @filename: file name
 * @text_content: is a NULL terminated string to write to the file
 * Return: 1 to success and -1 if it fails
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	size_t length;
	ssize_t byte_w;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		length = strlen(text_content);
		byte_w = write(fd, text_content, length);
		if (byte_w != (ssize_t) length)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
