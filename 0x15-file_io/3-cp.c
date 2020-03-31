#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
  * cp_function - copy content from file to file
  * @from: string
  * @to: pointer to string
  * Return: int
  */

int cp_function(char *from, char *to)
{
	int fd, fd_to, cl_from, cl_to;
	int R, W;
	char *buf[1024];

	fd_to = open(to, O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fd_to < 0)
		return (99);

	fd = open(from, O_RDONLY);
	if (fd < 0)
		return (98);

	R = read(fd, buf, 1024);
	if (R < 0)
		return (98);

	while (R > 0)
	{
		W = write(fd_to, buf, R);
		if (W < 0)
			return (99);
		R = read(fd, buf, 1024);
		if (R < 0)
			return (98);
	}

	cl_from = close(fd);
	cl_to = close(fd_to);

	if (cl_from < 0 || cl_to < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", -1);
		return (100);
	}
	return (0);
}


/**
  * main - main function
  * @argc: len of argv
  * @argv: command line arguments
  * Return: int
  */

int main(int argc, char **argv)
{
	int _return;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	_return = cp_function(argv[1], argv[2]);

	switch (_return)
	{
		case(99):
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
			exit(98);

		case(98):
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);

		case(100):
			exit(100);

		default:
			return (0);
	}
}
