#include "main.h"

/**
 * is_prime_number - function that shows a prime
 *
 * @n: the passed in integer
 * Return: the returned value
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);

	return (is_prime_helper(n, 2));
}

int is_prime_helper(int n, int i)
{
	if (i * i > n)
		return (1);

	if (n % i == 0)
		return (0);

	return (is_prime_helper(n, i + (i == 2 ? 1 : 2)));
}
