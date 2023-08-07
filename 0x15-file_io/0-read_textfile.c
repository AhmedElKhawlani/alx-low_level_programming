#include "main.h"

/**
 * read_textfile -  function that reads a text file and prints
 * it to the POSIX standard output
 * @filname: string representing the path to the file to read
 * @letters: number of letters the function should read and print
 * Return: The actual number of letters it could read and print if success
 * 0 if fail
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor;
	char *buffer;
	int num_rdbytes;
	int num_wrbytes;

	buffer = malloc(sizeof(char) * letters);
	if (!filename || !buffer)
	{
		free(buffer);
		return (0);
	}
	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
	{
		free(buffer);
		return (0);
	}
	num_rdbytes = read(file_descriptor, buffer, letters);
	if (num_rdbytes == -1)
	{
		free(buffer);
		return (0);
	}
	num_wrbytes = write(STDOUT_FILENO, buffer, num_rdbytes);
	if (num_wrbytes == -1)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(file_descriptor);
	return (num_wrbytes);
}
