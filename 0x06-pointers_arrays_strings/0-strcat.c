#include "main.h"
/**
 * _strcat -  appends the src string to the dest string, overwriting the terminating null byte 
 * (\0) at the end of dest, and then adds a terminating null byte
 * @dest: string with concatenation
 * @src: string to be concatenated
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	int lengthd, lengths;

	lengthd = 0;
	lengths = 0;

	while (*(dest + lengthd) != '\0')
		lengthd++;

	while (*(src + lengths) != '\0' && lengthd < 97)
	{
		*(dest + lengthd) = *(src + lengths);
		lengthd++;
		lengths++;
	}
	*(dest + lengthd) = '\0';
	return (dest);
}
