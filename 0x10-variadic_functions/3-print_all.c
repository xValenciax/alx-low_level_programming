#include "variadic_functions.h"

/**
 * print_all - prints anything
 *
 * @format: a list of types of arguments passed
 *
 * Return: always void
 */

void print_all(const char * const format, ...)
{
va_list ap;
unsigned int i = 0, ignored = 0;
char *str, ch;
int num;
float fnum;
va_start(ap, format);
while (format[i])
{
ignored = 0;
switch (format[i])
{
case 'c':
ch = va_arg(ap, int), printf("%c", ch);
break;
case 'i':
num = va_arg(ap, int), printf("%d", num);
break;
case 'f':
fnum = va_arg(ap, double), printf("%f", fnum);
break;
case 's':
str = va_arg(ap, char *);
if (!str)
str = "(nil)";
printf("%s", str);
break;
default:
ignored = 1;
break;
}
if (!ignored && format[i + 1])
printf(", ");
i++;
}
va_end(ap), printf("\n");
}
