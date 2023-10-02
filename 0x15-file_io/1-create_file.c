#include "main.h"

/**
 * create_file - a function that creates a file.
 * @filename: the file's name
 * @text_content: the string to write in the file
 *
 * Return: 1 on success or -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int op, wr, len = 0;

	if (filename == NULL)
		return (-1);

	while (text_content != NULL)
		len++;
	op = open(filename, O_CREAT | O_RDWR | O_TRUNC);
	wr = write(op, text_content, len);

	if (op == -1 || wr == -1)
		return (-1);

	close(op);

	return (1);
}
