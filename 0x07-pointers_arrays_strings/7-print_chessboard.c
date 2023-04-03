#include "main.h"

/**
 * print_chessboard - print the chessboard
 *
 * @a: a 2d array of 8 columns that represents the chessboard
 *
 * return: always void
 */

void print_chessboard(char (*a)[8])
{
int i = 0, j = 0;
int rows = sizeof(a[0]) / sizeof(a[0][0]);

while (i < rows)
{
while (j < 8)
{
if ((a[i][j] >= 'a' && a[i][j] <= 'z')
|| (a[i][j] >= 'A' && a[i][j] <= 'Z'))
_putchar(a[i][j]);
j++;
}

if (a[i][j + 1] != '\0' || a[i + 1][j] != '\0' || a[i + 1][j + 1] == '\0')
_putchar('\n');
i++;
j = 0;
}
}
