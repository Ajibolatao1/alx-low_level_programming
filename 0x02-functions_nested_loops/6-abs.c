#include "main.h"
#include <stdio.h>

/** main - function that computes the absolute value of an integer.
 *
 * Return: the returned value
 */

int _abs(int);

int main(void)
{
	_abs();

	return (0);

}


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
