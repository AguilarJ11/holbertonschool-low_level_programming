#ifndef var
#define var
#include <stdarg.h>
#include <stdio.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *sep, const unsigned int n, ...);
void print_strings(const char*sep, const unsigned int n, ...);

#endif
