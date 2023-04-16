#include "main.h"
#include <limits.h>
#include <math.h>
/**
 * _atoi - converts a string to an integer
 *
 * @s: string input to be converted
 *
 * Return: string s converted to an integer
 */

int _atoi(char *s)
{
unsigned int digit_fnd = 0, is_sent = 0, is_neg = 0, temp = 0, res = 0;
unsigned int pow = 1;
int i = 0, l, r;

while (*(s + i) != '\0')
{
if (((*(s + i) >= 'a' && *(s + i) <= 'z')
|| (*(s + i) >= 'A' && *(s + i) <= 'Z'))
&& !is_sent)
is_sent = 1;
if (*(s + i) == '-' && !is_neg)
is_neg = -1;
if (*(s + i) >= '0' && *(s + i) <= '9' && !digit_fnd)
digit_fnd = 1, l = i;
i++;
}
if (!digit_fnd)
return (0);
r = l;
while ((*(s + r) >= '0' &&  *(s + r) <= '9'))
r++;
r--;
if (is_sent)
is_neg = 1;
while (r != (l - 1))
{
temp = (*(s + r)-'0');
res += (temp *pow);
pow *= 10;
r--;
}
if (is_neg && !is_sent)
res *= -1;
return (res *is_neg);
}
