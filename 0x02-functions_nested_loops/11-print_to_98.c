#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: the input
 * Return: Always 0 (Success)
 */

void print_to_98(int n)
{
	int x = 98;

	for (n <= 98; n++)
	{
		_putchar(n);
		_putchar(',');
		_putchar(' ');
	}
	_putchar('\n');

	return (0);
}
