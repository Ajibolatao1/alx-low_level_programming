#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * printnumber - print number
 *
 * @n: the passed in arguement
 */

void printnumber(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n == 0)
		_putchar('0');

	if (n / 10)
		printnumber(n / 10);

	putchar(n % 10 + '0');
}
