#include "main.h"

/** 
 * print_sign - function that prints the sign of a number.
 *
 * @n: the inputted value
 *
 * Return: the returned value
 */


int print_sign(int n) 
{
	if (n > 0)
	{
		putchar(43);
		putchar(44);
		putchar(' ');
		return (1);
	}
	else if (n == 0)
        {
		putchar(48);
		putchar(44);
                putchar(' ');
		return (0);
        }
	else if (n < 0)
	{
		putchar(45);
		putchar(44);
                putchar(' ');
		return (-1);
	}


}
