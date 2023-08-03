#include "main.h"

/**
 * get_endianness - checks the endianness of the system
 * Return: 0 standing for big endian, 1 for little endian
 */
int get_endianness(void)
{
	unsigned int end1;
	char *end2;

	end1 = 1;
	end2 = (char *) & end1;
	return ((int)*end2);
}