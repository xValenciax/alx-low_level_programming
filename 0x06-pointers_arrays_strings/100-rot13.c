#include "main.h"

/**
 */

char *rot13(char *s)
{
  int i = 0, lower = 0;
  char tmp;

  while (s[i] != '\0')
    {
      while ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
	{
	  if ((s[i] >= 'a' && s[i] <= 'z'))
	    s[i] = (s[i] - 'a') + 'A', lower = 1;
	  
	  tmp = (s[i] % 13) + 'A';

	  s[i] = (tmp - (lower * 'A')) + (lower * 'a');
	  i++;
	}
      i++;
    }
  
  return (s);
}
