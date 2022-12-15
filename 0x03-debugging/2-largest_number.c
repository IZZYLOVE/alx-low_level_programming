#include "main.h"

/**
 * largest_number - prints the largest of 3 integers
 * @a: first integer input
 * @b: second integer input
 * @c: third integer input
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && b > c)
	{
		largest = a;
	}
	else if (b > a && a > c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}
	return (largest);
}
