#include <stdlib.h>
#include <stdio.h>
/* Program prints all possible different combinations of two digits */

/**
 * main - prints out all the numbers between 00 and 99
 * with no two digits being the same
 * Return: 0
 */
int main(void)
{
	int i, j;

	/* for loop */
	for (i = 0; i < 9; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			putchar((i % 10) + '0');
			putchar((j % 10) + '0');

			if (i == 8 && j == 9)
			{
				continue;
			}

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
