#ifndef VARIADIC_FUNCTOINS_H
#define VARIADIC_FUNCTOINS_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

int sum_them_all(const unsigned int, ...);
void print_numbers(const char *, const unsigned int, ...);
void print_strings(const char *, const unsigned int, ...);

#endif
