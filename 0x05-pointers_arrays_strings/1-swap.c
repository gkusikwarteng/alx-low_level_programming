#include "main.h"
/**
 * swap_int - function to swap int
 * @a: first parameter
 * @b: second parameter
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
