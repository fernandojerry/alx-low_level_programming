#include "main.h"
/**
 * swap_int - entry point
 * @n: swaps the value of two integers
 * return 0 (success)
 */
void swap_int(int *a, int *b)
{
	int ab;

	ab = *a;
	*a = *b;
	*b = ab;
}
