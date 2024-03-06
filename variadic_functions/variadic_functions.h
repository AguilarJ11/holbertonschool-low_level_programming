#ifndef var
#define var
#include <stdarg.h>
#include <stdio.h>

/**
 *
 *
 */

typedef struct var
{
	char *tipo;
	char *variable;
	char *argu
} var_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *sep, const unsigned int n, ...);
void print_strings(const char*sep, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
