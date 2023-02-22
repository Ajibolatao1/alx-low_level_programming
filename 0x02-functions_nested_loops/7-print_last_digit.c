#include "main.h"

/**
 * print_last_digit - function to print the last digit of a number
 *
 * @i: the given varuable
 *
 * Return: The returned value
 */

int print_last_digit(int i)
{
	int n;

	n = i % 10;

	if (n < 0)
		n = n * -1;

	_putchar(n + '0');

	return (n);

}
