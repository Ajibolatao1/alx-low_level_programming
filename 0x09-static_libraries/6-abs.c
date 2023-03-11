#include "main.h"

/**
 * _abs - function that computes the absolute value of an integer.
 *
 * @n: the inputted value
 *
 * Return: the returned value
 */

int _abs(int n)
{
	if (n < 0)
	{
		n *= -1;
		return (n);
	}
	else
		return (n);

}
