#include <unistd.h>
/**
 * main - program that prints the line with fput function
 * Return: program returns to 1
 */
int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 60);
	return (1);
}
