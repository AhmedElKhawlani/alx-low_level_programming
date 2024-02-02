#include "main.h"

/**
 * swap_int - Swaps the values of two integers;
 * @m: Pointer to first value;
 * @n: Pointer to second value.
 */
void swap_int(int *m, int *n)
{
	int q;

	q = *m;
	*m = *n;
	*n = q;
}
