#include "main.h"
/**
 * read_textfile - reads text file from input
 * @filename: the filename to be read
 * @letters: size to read
 * Return: number  of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	size_t in, out;
	char *buff;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	in = read(fd, buf, letters);
	out = write(STDOUT_FILENO, buf, in);

	close(fd);
	free(buf);
	return (out);
}
