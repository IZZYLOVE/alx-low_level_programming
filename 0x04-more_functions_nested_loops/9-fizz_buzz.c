#include <stdio.h>

/**
 * main - prints a Fizz Buzz number 1 to 100
 * Return: Always 0
 */

int main(void)
{
	int i;
	int n = 100;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			if ((i % 3) == 0)
				printf("Fizz");
			if ((i % 5) == 0)
				printf("Buzz");
			if (!(((i % 3) == 0) || (i % 5) == 0))
				printf("%d", i);
			if (i < n)
				printf(" ");
		}
	}
	printf("\n");
	return (0);
}
