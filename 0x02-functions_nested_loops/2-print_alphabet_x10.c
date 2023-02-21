#include <stdio.h>
#include "main.h"

/** main - the entry point
 *
 *
 * Return: The returned value
 */

void print_alphabet_x10(void);
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
