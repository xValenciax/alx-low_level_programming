#include "main.h"
/**
 * positive_or_negative - prints the sign of a number
 *
 * Return: Always void
 */
void positive_or_negative(int i)
{
	/* your code goes there */
	if (i > 0)
	printf("%d is positive\n", i);
	else if (i < 0)
	printf("%d is negative\n", i);
	else
	printf("%d is zero\n", i);
}
