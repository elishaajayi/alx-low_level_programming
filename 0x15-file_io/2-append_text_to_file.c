#include "main.h"

/**
 * append_text_to_file - append to end of file
 * @filename: the file to use
 * @text_content: the text to add
 * Return: 1 for success and -1 for fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int desc, len, write_result;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (-1);

	len = strlen(text_content);
	desc = open(filename, O_WRONLY | O_APPEND);
	write_result = write(desc, text_content, len);

	if (desc == -1 || write_result == -1)
		return (-1);

	close(desc);
	return (1);
}
