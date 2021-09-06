#include "main.h"

/**
 * swap_int - function that swaps two integer values
 * @a: pointer
 * @b: pointer
 * return: void
 */

void swap_int(int *a, int *b)
{
	int *c;
	*c = a;
	*a = b;
	*b = c;
}
