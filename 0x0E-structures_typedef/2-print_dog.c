#include "dog.h"

/**
 * print_dog - prints the content of a variable of type struct dog
 *
 * @d: variable of type struct dog
 *
 * Return: always void
 */

void print_dog(struct dog *d)
{
if (!d)
{
printf("%c", '\0');
return;
}

printf("Name: %s\n", d->name == NULL ? "nil" : d->name);
printf("Age: %f\n", d->age);
printf("Owner: %s\n", d->owner == NULL ? "nil" : d->owner);
}
