#include "main.h"
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
