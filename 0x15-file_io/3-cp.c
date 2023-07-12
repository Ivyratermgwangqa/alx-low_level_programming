#include "main.h"
/**
 * error - Prints an error message based on the given error code.
 * @choice: The error code.
 * @d: The file descriptor  associated with the error.
 * @str: The string associated with the error.
 *
 * Description: This function prints an error message to the standard error
 */
void error(int choice, int d, char *str)
{
	switch (choice)
	{
	case 1:
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	case 2:
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", str);
		exit(98);
	case 3:
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", str);
		exit(99);
	case 4:
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", d);
		exit(100);
	}
}

/**
 * main - Copies the content of a file to another.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line arguments.
 *
 * Return: 0 on success, or -1 on failure.
 */
int main(int argc, char *argv[])
{
	char buffer[1024];
	int file_from, file_to, close_file, i, j;

	if (argc != 3)
		error(1, 0, "");

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		error(2, 0, argv[1]);

	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_to == -1)
		error(3, 0, argv[2]);

	do {
		i = read(file_from, buffer, sizeof(buffer));
		if (i == -1)
			error(2, 0, argv[1]);

		j = write(file_to, buffer, i);
		if (j == -1)
			error(3, 0, argv[2]);

	} while (i > 0);
	close_file = close(file_from);
	if (close_file == -1)
		error(4, file_from, argv[1]);

	close_file = close(file_to);
	if (close_file == -1)
		error(4, file_to, argv[2]);

	return (0);
}
