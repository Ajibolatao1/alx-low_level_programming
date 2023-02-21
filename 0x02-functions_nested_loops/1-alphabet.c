#include "main.h"
/** print_alphabet - print all alphabets from a to z
 *
 * Return: the returned value
 */

void print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		_putchar(i);
	}

	_putchar('\n');
}
