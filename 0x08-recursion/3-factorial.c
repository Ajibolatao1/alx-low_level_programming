#include "main.h"

/*
 * factorial - the factorial
 * factorial: the factorial
 * factorial - the factorial function
 * factorial of a mumber
 * @n: the passed in integer
 * Return: the returned value
 */

int factorial(int n)
{
	if (n > 0)
		return (n * factorial(n - 1));
	if (n == 0)
		return (1);
	if (n < 1)
		return (-1);


}
