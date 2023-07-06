#include "main.h"

/**
 * get_endianness - checks the endianness of the machine
 *
 * Return: always void
 */

int get_endianness(void)
{
unsigned int n = 0x1;

char *c = (char *) &n;

if (*c == '1')
return (1);

else if (*c == '0')
return (0);

return (-1);
}
