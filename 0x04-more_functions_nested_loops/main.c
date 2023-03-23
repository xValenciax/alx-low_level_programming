#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char c;

    c = '9';
    printf("%c: %d\n", c, _isdigit(c));
    c = '-';
    printf("%c: %d\n", c, _isdigit(c));
    return (0);
}
