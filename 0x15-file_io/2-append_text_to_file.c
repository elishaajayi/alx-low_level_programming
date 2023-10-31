#include "main.h"

/**
 * append_text_to_file - Append text to the end of a file.
 * @filename: The name of the file to append to.
 * @text_content: The text to add (or NULL for no addition).
 * Return: 1 for success or -1 for failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int desc, len = 0, write_result;

	if (filename == NULL)
		return (-1);

	desc = open(filename, O_WRONLY | O_APPEND);

	if (desc == -1)
		return (-1);

	if (text_content != NULL)
	{
		len = strlen(text_content);
		write_result = write(desc, text_content, len);

		if (write_result == -1)
		{
			close(desc);
			return (-1);
		}
	}

	close(desc);
	return (1);
}

