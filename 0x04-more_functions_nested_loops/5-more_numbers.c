#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14, 10 times
 *
 * Return: always void
 */

void more_numbers(void)
{
int i = 48;
int j = 48;
int cnt = 0, limit = 0;
while (limit < 10)
{
while (cnt < 15)
{
_putchar(i);
if (cnt >= 10)
{
_putchar(j);
j++;
}
if (i >= 57 && cnt >= 9)
i = 49;
else if (i < 57 && cnt < 9)
i++;
cnt++;
}
i = 48;
j = 48;
cnt = 0;
limit++;
_putchar('\n');
}
}
