#include "main.h"
#include <ctype.h>
#include <stdlib.h>
#include <string.h>


/**
 * rot13 - check the code for
 * @str: the passed in arguement
 * Return: Always 0.
 */

char *rot13(char *str)
{

	int i, j, shift;

	char c, *result;

	result = (char *) malloc(strlen(str) + 1);

	for (i = 0, j = 0; str[i] != '\0'; i++, j++)
	{
		c = str[i];

		if (isalpha(c))
		{
			shift = islower(c) ? 'a' : 'A';
			c = ((c - shift) + 13) % 26 + shift;

		}
		result[j] = c;

	}
	result[j] = '\0';
	return (result);


}
