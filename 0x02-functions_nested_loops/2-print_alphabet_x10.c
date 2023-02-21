#include "main.h"

/**
 * print_alphabet_x10 - print alphabets 10 times
 *
 *
 * Return: The return value
 */

void print_alphabet_x10(void)
{
	int i, j;

	j = 0;
	while (j < 10)
	{
		for (i = 97; i < 123; i++)
		{
			_putchar(i);
		}

		_putchar('\n');
		j++;
	}
}
