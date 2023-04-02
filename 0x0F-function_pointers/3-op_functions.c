#include "3-calc.h"

/**
 * op_add - this function adds two numbers
 * @a:the first number
 * @b:the second number.
 *
 * Description: this function adds two numbers)?
 * section header: 3-calc.h)
 * Return: return the result of the add.
 */

int op_add(int a, int b)
{
	return (a + b);
}

int op_sub(int a, int b)
{
	return (a - b);
}

int op_mul(int a, int b)
{
	return (a * b);
}

int op_div(int a, int b)
{
	if (b != 0)
		return (a / b);
	printf("Error\n");
	exit(100);
}

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
