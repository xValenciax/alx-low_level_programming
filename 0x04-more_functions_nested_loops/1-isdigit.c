#include "main.h"

/**
 * _isdigit - checks if input is digit or not
 *
 * @c: char to be checked
 *
 * Return: 1 if char is digit, 0 otherwise
 */

int _isdigit(int c)
{
if (c >= 48 && c <= 58)
return (1);

return (0);
}
