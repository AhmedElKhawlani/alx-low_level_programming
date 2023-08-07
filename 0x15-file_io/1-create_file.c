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

	if (!filename)
	{
		return (-1);
	}
	if (!text_content)
	{
		file_descriptor = open(filename, O_RDWR);
		if (file_descriptor == -1)
			return (-1);
		return (1);
	file_descriptor = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (file_descriptor == -1)
	{
		return (-1);
	}
	for (length = 0; text_content[length];)
		length++;
	num_wrbytes = write(file_descriptor, text_content, length);
	if (num_wrbytes == -1)
	{
		return (-1);
	}
	close(file_descriptor);
	return (1);
}
