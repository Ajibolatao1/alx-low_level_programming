#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - a function that prints a name
 *
 * @name: the first arguement
 * @f: the pointer function
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
