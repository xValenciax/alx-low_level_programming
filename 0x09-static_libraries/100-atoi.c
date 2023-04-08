#include "main.h"
#include <limits.h>
#include <math.h>
#include <stdio.h>
/**
 * _atoi - converts a string to an integer
 *
 * @s: string input to be converted
 *
 * Return: string s converted to an integer
 */

int _atoi(char *s)
{
  int digit_done = 0, res = 0, j = 1;
  char *strt = s, *end = s, *i;
  while (!digit_done)
    {
      if(*strt >= '0' && *strt <= '9')
	digit_done = 1;
      strt++;
    }
  
  strt--;
  end = (strt + 1);
  
  while ((*end >= '0' &&  *end <= '9'))
    {
      end++;
    }

  i = end;

  while (i != (strt - 1))
    {
      printf("%d %d\n", res, *i);
      res += *i - 48;
      i--;
      j *= 10;
    }
  return (res);
}
