#include "main.h"
/**
 * jack_bauer - prints every minute of jack bauer day
 *
 * Return: void
 */

void jack_bauer(void)
{
int hrs = 0, mins = 0;
while (hrs < 60)
{
while (mins < 60)
{
if (hrs < 9)
{
_putchar('0');
_putchar('0' + hrs);
}
else
{
int first_dig = hrs % 10;
int scnd_dig = (hrs / 10) % 10;
_putchar('0' + scnd_dig);
_putchar('0' + first_dig);
}
_putchar(':');
if (mins < 10)
{
_putchar('0');
_putchar('0' + mins);
}
else
{
int first_dig = mins % 10;
int scnd_dig = (mins / 10) % 10;

_putchar('0' + scnd_dig);
_putchar('0' + first_dig);
}
_putchar('\n');
}
}
}
