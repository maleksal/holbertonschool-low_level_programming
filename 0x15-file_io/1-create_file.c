#include "holberton.h"


/**
  * create_file - create file from with a given name and content
  * @filename: pointer
  * @text_content: string
  * Return: number of written bytes
  */

int create_file(const char *filename, char *text_content)
{
	int fd, wr;
	int i;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 00600);
	if (fd < 0)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; text_content[i]; i++)
		;
		wr = write(fd, text_content, i);
		if (wr < 0)
			return (-1);

		return (wr);
	}

	return (1);
}
