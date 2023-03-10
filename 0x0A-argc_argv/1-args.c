#include <stdio.h>

/**
 * main -  a program that prints the number of arguments passed into it..
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
