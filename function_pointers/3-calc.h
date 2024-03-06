#ifndef calc
#define calc
#include <stdlib.h>
#include <stddef.h>

/**
 *struct operator - estructura op mat
 *@op: operador mat + - / * %
 *@f: puntero a funcion op
 */

typedef struct operator
{
	char *op;
	int (*f)(int, int);
} op_t;

int op_add(int, int);
int op_sub(int, int);
int op_mul(int, int);
int op_div(int, int);
int op_mod(int, int);
int (*get_op_func(char *s))(int, int);

#endif
