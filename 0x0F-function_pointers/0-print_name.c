#include "function_pointers.h"

/**
 * print_name - prints a name using a custom passed-in function
 *
 * @name: name to be printed
 * @f: function that controls the way the name is printed
 *
 * Return: always void
 */

void print_name(char *name, void (*f)(char *))
{
f(name);
}
