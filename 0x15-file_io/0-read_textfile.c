#include "holberton.h"

/**
  * read_textfile - print from file to stdout
  * @filename: pointer
  * @letters: int
  * Return: int
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, wr, re;
	char *buffer;

	/* check for null */
	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(letters));
	if (!buffer)
		return (0);

	/* open file & check for failure */
	fd = open(filename, O_RDONLY);
	CHECK_CALL(fd);

	re = read(fd, buffer, letters);
	CHECK_CALL(re);

	wr = write(STDOUT_FILENO, buffer, re);
	CHECK_CALL(wr);

	return (wr);

}
