#include <stdio.h>

/**
 * main - prints all possiblr different combinations of two digits
 *
 * Return: always 0 (Success)
 *
 */

int main(void)
{
	int ones = '0';
	int tens = '0';

	for (tens = '0'; tens <= '9'; tens++)/* prints the tens digit */
	{
		for (ones = '0'; ones <= '9'; ones++)/* prints the unit digits*/
		{
			if (!((ones == tens) || (tens > ones)))/*eliminates repitition*/
			{
				putchar(tens);
				putchar(ones);
				if (!(ones == '9' && tens == '8'))/*addes comma and space*/
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
