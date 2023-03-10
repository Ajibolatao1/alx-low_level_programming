#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers.
 * @argc: argument count
 * @argv: argument vector/array
 * Return: return 0
 */


int main(int argc, char *argv[])
{
	int x, y, mul;

	if (argv[1] == NULL || argv[2] == NULL)
	{
		printf("Error\n");
		return (1);
	}
	
	
	x = atoi(argv[1]);
        y = atoi(argv[2]);

	mul = x * y;

	if (argc > 1)
		printf("%d\n", mul);

	return (0);

}
