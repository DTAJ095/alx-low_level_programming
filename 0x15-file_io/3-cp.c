#include "main.h"

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
