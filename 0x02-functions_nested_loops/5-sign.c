/**
 * print_sign - checks the sign of entered number
 *
 * @n: number to be checked
 *
 * Return: (1) if number is positive
 * (-1) if number is negative, 0 otherwise
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}

else if (n == 0)
{
_putchar('0');
return (0);
}

_putchar('-');
return (-1);
}
