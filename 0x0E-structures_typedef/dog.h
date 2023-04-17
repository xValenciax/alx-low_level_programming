#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - represents a dog
 *
 * @name: a string for the name of the dog
 * @owner: a string for the name of the dog's owner
 * @age: a float for the dog's age
 */

struct dog
{
char *name;
char *owner;
float age;
};

typedef struct dog dog_t;

void init_dog(struct dog *, char *, float, char *);
void print_dog(struct dog *);
dog_t *new_dog(char *, float, char *);

#endif
