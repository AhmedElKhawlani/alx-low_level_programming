#include <stdlib.h>
#include "main.h"

/**
 * create_array - Creates an array of chars,
 * and initializes it with a specific char;
 * @size: Size of the array that will be created;
 * @c: Char to initialize the array c;
 * Return: Pointer to the array (Success), NULL (Error).
 */

char *create_array(unsigned int size, char c)
{
    char *arr;
    unsigned int i;

    if (size == 0)
        return NULL;    
    arr = malloc(size * sizeof(char));
    if (!arr)
        return NULL;
    for (i = 0; i < size; i++)
        arr[i] = c;
    return arr;
}

