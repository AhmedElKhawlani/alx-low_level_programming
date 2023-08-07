#include "main.h"

char *initiate_buffer(char *filename);
void Close_file(int descriptor);

/**
 * initiate_buffer - Creates a buffer, this function is added
 * to make main() with less number of lines
 * @filename : The name of the file_to
 * Return: Pointer to the initiated buffer
 */

char *initiate_buffer(char *filename)
{
	char *b;

	b = malloc(sizeof(char) * 1024);
	if (!b)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
	return (b);
}

/**
 * Close_file - Closes a file this function is created
 * to make main() with less number of lines
 * @descriptor : File descriptor
 */

void Close_file(int descriptor)
{
	int tester;

	tester = close(descriptor);
	if (tester == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", descriptor);
		exit(100);
	}
}

/**
 * main - copies the content of a file to another file
 * @argc: Number of parameters passed to the program
 * @argv: Array that points to those parameters
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	char *buffer;
	int file_to, file_from, from_size, to_size;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	file_from = open(argv[1], O_RDONLY);
	buffer = initiate_buffer(argv[2]);
	from_size = read(file_from, buffer, 1024);
	do {
		if (file_from == -1 || from_size == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		to_size = write(file_to, buffer, from_size);
		if (file_to == -1 || to_size == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		from_size = read(file_from, buffer, 1024);
		file_to = open(argv[2], O_WRONLY | O_APPEND);
	} while (from_size > 0);
	free(buffer);
	Close_file(file_to);
	Close_file(file_from);
	return (0);
}
