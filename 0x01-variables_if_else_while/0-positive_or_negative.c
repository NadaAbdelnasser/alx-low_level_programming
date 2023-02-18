#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* Program assign a random number to variable n each time it executed */


/**
 * main - Entry point
 * Description: if-else program.
 * Return: (0) always - Success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* if statement */
	if (n > 0)
	{
		printf("%i is positive\n", n);
	} else if (n == 0)
	{
		printf("%i is zero\n", n);
	} else
	{
		printf("%i is negative\n", n);
	}
	return (0);
}
