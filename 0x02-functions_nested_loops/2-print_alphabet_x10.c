#include <main.h>

/** main - the entry point
 *
 *
 * Return: The returned value
 */

void print_alphabet_x10(void);

int main(void) 
{
	print_alphabet_x10();
	return (0);

}

void print_alphabet_x10()
{
	int i, j;

	i = 97;
	j = 0;
	while (j < 10)
	{
		while (i < 123)
		{
			putchar(i);
			i++;
		}
		putchar("\n");
		i = 97;
		j++;
	}	
}
