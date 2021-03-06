#include "holberton.h"


/**
  * append_text_to_file - append text to a file
  * @filename: pointer
  * @text_content: string
  * Return: 1 if success OR -1 if fail
  */

int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t fd, wr;
	int i;

	if (!filename)
		return (-1);

	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd < 0)
		return (-1);

	if (!text_content)
		return (1);

	for (i = 0; text_content[i]; i++)
	;
	wr = write(fd, text_content, i);
	if (wr < 0)
		return (-1);

	return (1);
}
