#include "main.h"
#include <ctype.h>
#include <string.h>

/**
 * *cap_string - capitalize strings
 *
 * @str: the arguement
 *
 * Return: the returned value
 */

char *cap_string(char *str)
{
	int i, len, capitalize_next;

	len = strlen(str);
	capitalize_next = 1;

	for (i = 0; i < len; i++)
	{
		if (isspace(str[i]) || str[i] == ',' || str[i] == ';' || str[i] == '.' ||
				str[i] == '!' || str[i] == '?' || str[i] == '"' ||
				str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}')
			capitalize_next = 1;

		else if (capitalize_next)
		{
			str[i] = toupper(str[i]);
			capitalize_next = 0;
		}


	}

	return (str);


}
