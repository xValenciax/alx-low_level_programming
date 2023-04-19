#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_name(char *, void (*)(char *));
void array_iterator(int *, size_t, void (*)(int));

#endif
