#include "main.h"

/**
 * string_toupper - converts all lowercase letters of a string to uppercase.
 * @c: pointer to the string to convert
 * Return: the converted string.
 */

char *string_toupper(char *c)
{
	int i;

	for (i  = 0; c[i] != '\0'; i++)
	{
		if (c[i] >= 'a' && c[i] <= 'z')
			c[i] = c[i] - 32;
	}

	return (c);
}
