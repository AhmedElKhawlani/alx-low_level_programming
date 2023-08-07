#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: string representing the path to the file to read
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
 
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor, num_wrbytes;
	int len = 0;
	
	if (!filename)
		return (-1);
	if (text_content)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	file_descriptor = open(filename, O_WRONLY | O_APPEND);
	num_wrbytes = write(file_descriptor, text_content, len);
	if (file_descriptor == -1 || num_wrbytes == -1)
		return (-1);
	close(file_descriptor);
	return (1);
	