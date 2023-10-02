#include "main.h"

/**
 * print_buffer - prints a buffer
 * @file: the file in which you will print the buffer
 *
 * Return: Nothing
 */

void *print_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buffer);
}

/**
 * close_file - closes a file
 * @fd: the file description
 *
 * return: Nothing
 */

void close_file(int fd)
{
	int cl;

	cl = close(fd);
	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Entry point
 * Description: a program that copies the content of a file
 * to another one
 * @argc: the arguments count
 * @argv: the array containing the command lines arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int src_file, dest_file, rd, wr;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = print_buffer(argv[2]);
	src_file = open(argv[1], O_RDONLY);
	dest_file = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	rd = read(src_file, buffer, 1024);
	
	while (rd > 1)
	{
		if (src_file == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		wr = write(dest_file, buffer, rd);
		if (dest_file == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		rd = read(src_file, buffer, 1024);
		dest_file = open(argv[2], O_WRONLY | O_APPEND);
	}
	free(buffer);
	close_file(src_file);
	close_file(dest_file);

	return (0);
}
