#include "holberton.h"

/**
  * read_textfile - print from file to stdout
  * @filename: pointer
  * @letters: int
  * Return: int
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t wr, re;
	char *buffer;

	/* check for null */
	if (filename == NULL)
		return (0);

	buffer = malloc(letters * sizeof(char));
	if (buffer == NULL)
		return (0);

	/* open file & check for failure */
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);

	re = read(fd, buffer, letters);
	if (re < 0)
		return (0);

	wr = write(STDOUT_FILENO, buffer, re);
	if (wr < 0 || wr != re)
		return (0);

	close(fd);
	free(buffer);
	return (wr);

}
