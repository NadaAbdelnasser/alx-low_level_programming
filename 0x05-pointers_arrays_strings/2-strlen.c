#include "main.h"
#include <stdio.h>

/**
 * _strlen - a function that returns the length of string 
 * @s: char input
 * Return: length of string inut
 */

int _strlen(char *s)
{
	int c = 0;

	while (*s != '\0')
	{
		c++;
		s++;
	}
	return (c);
	
}
