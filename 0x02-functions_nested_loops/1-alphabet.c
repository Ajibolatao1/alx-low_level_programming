#include "main.h"
/** main - the entry point
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
}

int main(void)
{
	print_alphabet();
	return (0);

}

