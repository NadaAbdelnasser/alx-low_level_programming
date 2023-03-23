
#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - check if a number is integer
 * @array: is an array of integers
 * @size: number of elements in the array array
 * @cmp: function pointer to the compare fuctions
 * Return: the index
 * -1 is thire is no intger or size smaller than or equal zero
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || cmp == NULL || array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
