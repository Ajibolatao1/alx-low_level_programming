#include "main.h"
#include <stdio.h>

/** main - the entry point
 *
 * Return: the returned value
 */

int main(void)
{
	print_alphabet();
	return (0);

}

void print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		_putchar(i);
	}
}
