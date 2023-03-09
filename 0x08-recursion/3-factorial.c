#include "main.h"

/**
 * factorial - function that returns the factorial of a given number.
 *
 * @n: the passed in integer
 * Return: the returned value
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 1)
		return (-1);
	return (n * factorial(n - 1));
}
