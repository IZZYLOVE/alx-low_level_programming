#include "main.h"

/**
 * print_times_table - print the n times table
 * @n: inpute
 * Return: Always 0 (Success)
 */

void print_times_table(int n)
{
	int num, mult, prod;

	for (n >= 0; n <= 15;)
	{
		for (num = 0; num <= n; num++)
		{
			_putchar('0');
			for (mult = 1; mult <= n; mult++)
			{
				_putchar(',');
				_putchar(' ');
				prod = num * mult;
				if (prod <= n)
					_putchar(' ');
				else
					_putchar((prod / 10) + '0');
				_putchar((prod % 10) + '0');
			}
			_putchat('\n');
		}
	}
}
