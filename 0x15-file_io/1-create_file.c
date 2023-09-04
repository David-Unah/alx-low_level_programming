#include "main.h"

/**
 * create_file - this will  make new files
 * @filename: it will point to the file to be created
 * @text_content: this is the pointer that has a set string
 *
 * Return: 1 on success, -1 on failure (file can not be created, file can not be written.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w, test = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (test  = 0; text_content[test ];)
			test++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, text_content, test);

	if (fd == -1 || w == -1)
		return (-1);

	close(fd);

	return (1);
}
