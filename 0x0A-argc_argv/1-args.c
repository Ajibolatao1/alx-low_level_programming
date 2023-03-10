#include <stdio.h>

/**
 * main -  program that prints its name, followed by a new line.
 * @argc: argument count
 * @argv: argument vector/array
 * Return: return 0
 */


int main(int argc, char *argv[])
{
	if (argv[0] != NULL)
		printf("%d\n", argc - 1);

	return (0);

}
