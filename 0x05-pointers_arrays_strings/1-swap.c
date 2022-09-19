#include "main.h"
/**
 * swap_int - swap the value of two integers
 * @a: the first integer to swap
 * @b: the second integer to swap with
 */
void swap_int(int *a, int *b)
{
	int c;
	c = *a;
	*a = *b;
	*b = c;
}
