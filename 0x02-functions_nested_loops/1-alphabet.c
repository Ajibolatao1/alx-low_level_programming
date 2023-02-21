#include <main.h>

/** main - the entry point
 *
 * Return: the returned value
 */

void print_alphabet(void);

int main(void)
{
	print_alphabet();
	return (0);

}

void print_alphabet(void) 
{
	int i;

	i = 97;
	while (i < 123)
	{
		putchar(i);
		i++;
	}
	putchar("\n");

}
