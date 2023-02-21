#include <main.h>

/** main - function that prints the sign of a number.
 *
 * Return: the returned value
 */

int print_sign(int n);

int main(void)
{
	print_sign();
	
	return (0);
}

int print_sign(int n) 
{
	if (n > 0)
	{
		putchar('+');
		putchar(',');
		putchar(' ');
		return (1);
	}
	else if (n == 0)
        {
		putchar('0');
		putchar(',');
                putchar(' ');
		return (0);
        }
	else if (n < 0)
	{
		putchar('-');
		putchar(',');
                putchar(' ');
		return (-1);
	}


}
