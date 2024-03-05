#include "function_pointers.h"

/**
 *print_name - print a name
 *@name: entry name
 *@f: entry functioon
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
