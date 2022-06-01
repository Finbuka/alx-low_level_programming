#include "main.h"

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments passed to the program
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int fd_r, fd_w, ebu, ebuks, fin;
	char buf[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_r = open(argv[1], O_RDONLY);
	if (fd_r < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_w = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((ebu = read(fd_r, buf, BUFSIZ)) > 0)
	{
		if (fd_w < 0 || write(fd_w, buf, ebu) != ebu)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(fd_r);
			exit(99);
		}
	}
	if (ebu < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	ebuks = close(fd_r);
	fin = close(fd_w);
	if (ebuks < 0 || fin < 0)
	{
		if (ebuks < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_r);
		if (fin < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_w);
		exit(100);
	}
	return (0);
}
