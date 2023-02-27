#include "main.h"

/**
 * print_rev - function that prints a string in reverse
 * @s: string input
 * Return: string in reverse
 */
void print_rev(char *s)
{
	int n = 0;
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		n++;
	}
	for (j = (n - 1); j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
