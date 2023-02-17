#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - the entry point
 *
 * if else block
 *
 * printf - to print the whether it is positive
 *
 * Result: the result
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{	
		printf("%d is positive", n);
	}
	else if (n == 0)
	{	
		printf("%d is zero", n);
	}
	else
	{	
		printf("%d is negative", n);
	}
	printf("\n");
	return (0);
}
