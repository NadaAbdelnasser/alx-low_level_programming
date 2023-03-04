<<<<<<< HEAD
nb
=======
#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * @n: number of bytes to print
 * Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = j = 0;
	while (dest[j] != '\0')
		j++;

	while (src[i] != '\0' && i < n)
	{
		dest[j + i] = src[i];
		i++;
	}
	return (dest);
}

>>>>>>> 807f043dd6f277f44d71ad365adbfb4ead8c9139
