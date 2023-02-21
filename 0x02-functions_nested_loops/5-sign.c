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
		_putchar(43);
		_putchar(44);
		_putchar(' ');
		return (1);
	}
	else if (n == 0)
        {
		_putchar(48);
		_putchar(44);
                _putchar(' ');
		return (0);
        }
	else if (n < 0)
	{
		_putchar(45);
		_putchar(44);
                _putchar(' ');
		return (-1);
	}


}
