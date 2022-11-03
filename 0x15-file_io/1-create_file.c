#include "main.h"
/**
 * create_file - creates a file
 * @filename: file to be created if not existing
 * @file_content: - text to be write to the file
 * Return: 1 on success -1 otherwise
 */
int create_file(const char *filename, char *file_content)
{
	int out = 0, fd = 0, i = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (file_content)
	{
		while (*(file_content + i) != '\0')
			i++;
		out  = write(fd, file_content, i);
	}
	if (out == -1 && out != i)
		return (-1);
	return (1);
}
