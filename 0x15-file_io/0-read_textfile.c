#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the standard output
 * @filename: name of the file to be read
 * @letters: number of letters to read and print
 *
 * Return: the number of letters printed, or 0 if it failed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int amount, total;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);

	amount = read(fd, buf, letters);
	if (amount < 0)
	{
		free(buf);
		return (0);
	}
	buf[amount] = '\0';

	close(fd);

	total = write(STDOUT_FILENO, buf, amount);
	if (total < 0)
	{
		free(buf);
		return (0);
	}

	free(buf);
	return (total);
}
