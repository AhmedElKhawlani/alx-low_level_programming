#include "main.h"

/**
 * create_file -  function that creates a file
 * @filename: string representing the path to the file to read
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int file_descriptor;
	int length;
	int num_wrbytes;

	file_descriptor = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (file_descriptor == -1)
	{
		return (0);
	}
	if (text_content)
	{
		for (length = 0; text_content[length] != '\0';)
			length++;
	}
	num_wrbytes = write(file_descriptor, text_content, length);
	if (num_wrbytes == -1)
	{
		return (0);
	}
	close(file_descriptor);
	return (1);
}
