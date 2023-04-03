#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 *
 * @s: a pointer to pointer to char
 * @to: source string
 *
 * Return: always void
 */

void set_string(char **s, char *to)
{
*s = to;
}
