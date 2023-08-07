#include "main.h"
/**
 * create_file - function that creates a file
 * @filename: name of file
 * @text_content: content of created file
 * Return: 1 for success, -1 otherwise
 */
int create_file(const char *filename, char *text_content)
{
	int i = 0, fd, m;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	while (text_content[i] != '\0')
		i++;
	m = write(fd, text_content, i);
	close(fd);
	if (m == -1)
		return (-1);
	return (1);
}
