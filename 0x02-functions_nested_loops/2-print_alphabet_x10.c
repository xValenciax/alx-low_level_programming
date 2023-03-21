#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10 time
 *
 * Return: void
 */

void print_alphabet_x10()
{
  char strt = 'a';
  int cnt = 0;

  while (cnt < 9)
    {
      while (strt <= 'z')
	{
	  _putchar(strt);
	  strt++;
	}
      cnt++;
    }
}
