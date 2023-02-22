#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print all natural numbers from a given number to 98
 *
 * @n: the given number
 *
 * Result: the returned result
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		while (n > 98)
		{
			printf("%d", n);
			printf(", ");
			n--;
		}
	}
	else if (n < 98)
	{
		while (n < 98)
		{
			printf("%d", n);
			printf(", ");
			n++;
		}
	}

	printf("%d\n", n);

}
