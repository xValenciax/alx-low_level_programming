#include "main.h"

/**
 * rev_string - reveses a string
 *
 * @s: string to be reversed
 *
 * Return: Always void
 */

void rev_string(char *s)
{
int str_size = strlen(s), i;
char *l = s, *r = (s + str_size - 1);
char temp = *l, temp2 = *r;
if (str_size == 0)
return;
for (i = 0; i < str_size / 2; i++)
{
*l = temp2;
*r = temp;
temp = *(l + 1);
temp2 = *(r - 1);
l++;
r--;
}
}
