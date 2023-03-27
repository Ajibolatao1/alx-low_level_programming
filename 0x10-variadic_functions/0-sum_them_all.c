#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - a function that returns the sum of all its parameters
 *
 * @n: the passed in integer
 * Return: the returned value
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;

	unsigned int i;
	int sum;

	sum = 0;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (i = 0; i < (unsigned int) n; i++)
		sum += va_arg(args, int);

	va_end(args);

	return (sum);
}
