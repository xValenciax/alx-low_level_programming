#include "main.h"

/**
 * binary_to_uint - converts a binary string into an unsigned integer
 * @b: binary string
 *
 * Return: the converted integer
 */

unsigned int binary_to_uint(const char *b)
{
unsigned int result = 0;
int i;

if (!b)
return (0);

for (i = 0; b[i]; i++)
{
if (b[i] != '0' && b[i] != '1')
return (0);

result = result * 2 + (b[i] - '0');
printf("result = %d\n", result);
}
return (result);
}
