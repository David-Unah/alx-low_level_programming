#include "main.h"

/**
 * append_text_to_file - this will add text to the file
 * @filename: points to the set file
 * @text_content: This will be added at the end
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, test= 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (test = 0; text_content[test];)
			test++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, test);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
