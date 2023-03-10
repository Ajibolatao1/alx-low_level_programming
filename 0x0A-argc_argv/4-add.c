#include <stdio.h>
#include <stdlib.h>

/**
 * main -  program that adds positive numbers.
 * @argc: argument count
 * @argv: argument vector/array
 * Return: return 0
 */


int main(int argc, char *argv[])
{
	int i, sum, numb;

	/* If no number is passed to the program, print 0, followed by a new line */
	if (argv[1] == NULL)
	{
		printf("0\n");
		return (0);
	}

	/* return 0 if it contains symbol */

	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}
	}

	/* adds positive numbers */
	sum = 0;

	for (i = 1; i < argc; i++)
	{
		numb = atoi(argv[i]);
		sum = sum + numb;
	}

	   printf("%d\n", sum);




	return (0);
}
