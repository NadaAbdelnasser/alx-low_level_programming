#include "main.h"

/**
 * print_numbers - entry point
 *
 * Description: Prints the numbers with _putchar
 *
 * Return: void
 */

void print_numbers(void)
{
	int numbers;

	for(numbers = '0'; numbers <= '9' ; numbers++)
	{
		_putchar(numbers);
	}
	_putchar('\n');
}
