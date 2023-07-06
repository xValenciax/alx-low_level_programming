#include "main.h"

/**
 * _strlen - return the length of a string
 *
 * @s: string
 *
 * Return: the length of string s
 */

int _strlen(const char *s)
{
int len;

for (len = 0; *s != '\0'; len++)
s++;

return (len);
}

/**
 * binary_to_uint - converts a binary string into an unsigned integer
 * @b: binary string
 *
 * Return: the converted integer
 */

unsigned int binary_to_uint(const char *b)
{
unsigned int result = 0, tmpProd = 1;
int len = _strlen(b) - 1, i, j, pow = 0;

if (!b)
return (0);

for (i = len; i >= 0; i--)
{
if (b[i] == '1')
{
for (j = 0; j < pow; j++)
tmpProd *= 2;
result += tmpProd;

tmpProd = 1;
}
else if (b[i] != '0')
return (0);
pow++;
}
return (result);
}
