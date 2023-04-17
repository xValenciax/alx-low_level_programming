#include "dog.h"

/**
 * print_dog - prints the content of a variable of type struct dog
 *
 * @d: variable of type struct dog
 *
 * Return: always void
 */

#define frmt(x) ((x == NULL) ? "(nil)" : (x))

void print_dog(struct dog *d)
{
if (!d)
return;

printf("Name: %s\n", frmt(d->name));
printf("Age: %f\n", d->age);
printf("Owner: %s\n", frmt(d->owner));
}
