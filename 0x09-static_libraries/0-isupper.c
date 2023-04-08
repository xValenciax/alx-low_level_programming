#include "main.h"

/**
 * _isupper - checks if a char is upper case or not
 *
 * @c: character to be checked
 *
 * Return: 1 if character is uppercase, 0 otherwise
 */

int _isupper(int c)
{
if (c >= 65 && c <= 90)
return (1);

return (0);
}
