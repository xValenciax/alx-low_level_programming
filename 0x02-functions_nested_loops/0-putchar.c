#include "main.h"
/**
 * main - Entry point
 *
 * Description: Alx Task
 *
 * Return: ALways 0 (Success)
 */

int main(void)
{
_putchar("_putchar\n");
return (0);
}

/**
 * _putchar - prints a string to standard output
 *
 * @str: the string to be printed
 *
 * Description: This function uses write system call
 * to print the passed string to standard output
 *
 * Return: Always void
 */
void _putchar(char *str)
{
write(1, str, strlen(str));
}
