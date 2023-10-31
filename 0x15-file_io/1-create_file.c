#include "main.h"

/**
 * create_file - to create file with permissions
 * @filename: the file to create
 * @text_content: the text to write to file
 * Return: 1 for success and -1 for fail
 */
int create_file(const char *filename, char *text_content)
{
	int desc = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	int len, result;

	if (filename == NULL)
		return (-1);

	if (desc == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content != NULL)
			len++;
		result = write(desc, text_content, len);
	}

	if (result == -1)
		return (-1);

	close(desc);
	return (1);
}
