#include <stdio.h>
#include <stdlib.h>

/**
 * main - returns a combination of numbers
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, j;

	for (i = 0; j < 100; i++)
	{
		for (j = 0; j < 100; j++)
		{
			if (i < j)
			{
				putchar((i / 10) + '0');
				putchar((i % 10) + '0');
				putchar(' ');
				putchar((j / 10) + '0');
				putchar((j % 10) + '0');
				if (i * 100 + j != 9899)
				{
					putchar(' ');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
