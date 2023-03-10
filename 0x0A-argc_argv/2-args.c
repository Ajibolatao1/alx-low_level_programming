#include <stdio.h>

/**
 * main -  program that prints all arguments it receives
 * @argc: argument count
 * @argv: argument vector/array
 * Return: return 0
 */


int main(int argc, char *argv[])
{
	int i;

	i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);

}
