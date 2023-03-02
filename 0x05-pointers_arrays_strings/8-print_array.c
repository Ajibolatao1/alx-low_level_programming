#include "main.h"
#include <stdio.h>

/**
 * print_array - a function that prints n elements of an array
 * of integers, followed by a new line.
 * @n: number of arrays to be printed
 * @a: array of integers
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
		printf("%d, ", a[i]);

	printf("\n");

}
