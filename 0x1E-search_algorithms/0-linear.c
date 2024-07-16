#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array of,
 * integers using the Linear search algorithm;
 * @array: Array to explore;
 * @size: Size of the array;
 * @value: value to search;
 * Return: First index where value is located if possible,
 * -1 if value is not present in array or if array is NULL.
 **/

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
