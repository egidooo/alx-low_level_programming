#include "main.h"
#include <errno.h>
#define BUFFER_SIZE 1024
/**
 * main - copy content of file to another file
 * @argc: counter
 * @argv: pointer vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	char buffer[BUFFER_SIZE];
	ssize_t byte_r, byte_w;

	if  (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't write to file %s\n", argv[2]);
		exit(99);
	}
	while ((byte_r = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		byte_w = write(fd_to, buffer, byte_r);
		if (byte_w != byte_r)
		{
			dprintf(STDERR_FILENO, "Error: can't write to file %s\n", argv[2]);
			exit(99);
		}
	}
	if (byte_r == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close file %d\n", fd_from);
		return (100);
	}
	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close file %d\n", fd_to);
		exit(100);
	}
	return (0);
}
