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
int digit_fnd = 0, j = 1, is_sent = 0, is_neg = 0, temp = 0, res = 0;
char *strt = s, *end = s;

while (!digit_fnd && *strt != '\0')
{
if ((*strt != '-' && *strt != ' ' && *strt != '\t'
&& !(*strt >= '0' && *strt <= '9')) && !is_sent)
is_sent = 1;
if (*strt >= '0' && *strt <= '9')
digit_fnd = 1;
strt++;
}
if (!digit_fnd)
return (0);
strt--;
end = strt;
while ((*end >= '0' &&  *end <= '9'))
end++;
end--;
if (*(strt - 1) == '-')
is_neg = 1;
while (end != (strt - 1))
{
temp = *end - '0';
res += (temp *j);
j *= 10;
end--;
}
if (is_neg && !is_sent)
res *= -1;
return (res);
}
