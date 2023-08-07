#include "main.h"
/**
 * read_textfile - funct that reads text file and prints it to POSIX stdout.
 * @filename: file to be read
 * @letters: Amount of letters to be read and printed
 * Return: num written or 0 if fail
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t n, m;
	char *lt;
	int fd;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	lt = malloc(letters + 1);
	if (lt == NULL)
	{
		close(fd);
		return (0);
	}

	n = read(fd, lt, letters);
	if (n == -1)
	{
		close(fd);
		free(lt);
		return (0);
	}

	lt[n] = '\0';

	m = write(STDOUT_FILENO, lt, n);
	if (m != n)
	{
		close(fd);
		free(lt);
		return (0);
	}

	close(fd);
	free(lt);
	return (m);
}
