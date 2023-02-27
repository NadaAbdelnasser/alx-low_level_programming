#include "main.h"
#include <stdio.h>

/**
 * _puts - function that prints a string in reverse
 * @s: string input
 * Return: string
 */

void print_rev(char *s)
{
	int i,j;
	int n=0;

	for (i = 0; s[i] != '\0'; i++)
	{
		n++;
	}
	
	for (j = (n-1); n>=0; n--)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}
