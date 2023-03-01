#include "main.h"

/**
 * reverse_array - function to reverse the content of an array
 *
 * @a: first arguement
 *
 * @n: second arguement
 *
 * Return: the returned value
 *
 */

void reverse_array(int *a, int n)
{

	int i, j;

	i = 0;

	j = n - 1;

	while (i < j)
	{
		int temp = a[i];

		a[i] = a[j];

		a[j] = temp;

		i++;

		j--;
	}


}
