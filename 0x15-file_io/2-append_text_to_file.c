#include "main.h"
#include <string.h>

/**
 * append_text_to_file -  appends text at the end of a file
 * @filename: file name
 * @text_content: is the NULL terminated string to add at the end of the file
 * Return: 1 if success and -1 if it fails
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	size_t length;
	ssize_t byte_w;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);
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
	close (fd);
	return (1);
}
