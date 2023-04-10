#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: file name
 * @letters: number of letter to read and print
 * Return: 0 if file can't be opened or is NULL
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t byte_r;
	ssize_t byte_w;

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	buffer = (char *) malloc(letters * sizeof(char));
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	byte_r = read(fd, buffer, letters);
	if (byte_r == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	buffer[byte_r] = '\0';
	byte_w = write(STDOUT_FILENO, buffer, byte_r);
	if (byte_w == -1 || byte_w != byte_r)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	free(buffer);
	close(fd);
	return (byte_w);
}
