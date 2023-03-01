#include "main.h"
#include <ctype.h>

/**
 * *string_toupper - convert lowercase string to uppercase
 *
 * @str: passed in str
 *
 * Return: the returned value
 */

char *string_toupper(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		if (islower(str[i]))
			str[i] = toupper(str[i]);

		i++;

	}

	return (str);


}
