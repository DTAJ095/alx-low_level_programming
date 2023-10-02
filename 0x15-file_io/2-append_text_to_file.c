#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: the file's name
 * @text_content: the string to be added in the file
 *
 * Return: 1 on success or -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int op, wr, len = 0;

	if (filename == NULL)
		return (-1);
	op = open(filename, O_RDWR | O_APPEND);
	if (op < 1)
		return (-1);

	if (text_content == NULL)
	{
		close(op);
		return (1);
	}

	while (text_content && *(text_content + len))
		len++;

	wr = write(op, text_content, len);
	if (op == -1 || wr == -1)
		return (-1);
	close(op);

	return (1);
}
