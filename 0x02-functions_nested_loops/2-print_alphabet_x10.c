#include "main.h"

/**
 * print_alphabet - a function that prints the alphabet, in lowercase
 *
 * Return: Always 0 (Succes)
 */
void print_alphabet(void)
{
	int lett, n;
  while (n < 10)
  {
      for (lett = 'a'; lett <= 'z'; lett++)
      {
        _putchar(lett);
      }
      n++;
	    _putchar('\n');
  }
}
