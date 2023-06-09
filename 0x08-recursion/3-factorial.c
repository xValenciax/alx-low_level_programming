#include "main.h"

/**
 * factorial - return the factorial of a given number recursively
 *
 * @n: input number
 *
 * Return: the result of factorial of the given number
 */

int factorial(int n)
{
if (n < 0)
return (-1);

if (n == 0 || n == 1)
return (1);

return (n * factorial(n - 1));
}
