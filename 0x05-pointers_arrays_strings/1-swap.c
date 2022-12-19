#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: input1
 * @b: input2
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int q;

	q = *a;
	*a = *b;
	*b = q;
}
