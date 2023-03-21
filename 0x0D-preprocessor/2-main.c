#include <stdio.h>
#define PRINT_FILENAME printf("%s\n", __FILE__)

/**
 * main - prints the name of the file it was compiled from
 * Return: the returned value
 */

int main(void)
{
	PRINT_FILENAME;
	return (0);
}

