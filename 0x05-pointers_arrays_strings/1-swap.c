#include "main.h"

/**
 * swap_int - write a function that swaps the values of two integers.
 *
 * @a: integer 1
 * @b: integer 2
 */

void swap_int(int *a, int *b)
{
	int x, y, *a, *b, temp;

	a = &x;
	b = &y;

	temp = 0;
	temp = *b;
	*b = *a;
	*a = temp;
}
