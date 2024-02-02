#include "main.h"

/**
 * reverse_array - Reverses an array of integers;
 * @a: Array to be reversed;
 * @n: Number of elements in the array.
 */

void reverse_array(int *a, int n)
{
	int i, j, tmp;

	j = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j--] = tmp;
	}
}
