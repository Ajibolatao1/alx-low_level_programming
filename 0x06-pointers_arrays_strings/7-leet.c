#include "main.h"
#include <string.h>

/**
 * *leet - encode a string
 *
 * @str: arguement
 *
 * Return: the returned value
 */

char *leet(char *str)
{
	int i, j, len;
	char *leet_table;

	len = strlen(str);

	leet_table = "443300771100";

	for (i = 0; i < len; i++)
	{
		for (j = 0; j < 6; j++)
		{
			if (str[i] == "aAeEoOtTlL"[j])
			{
				str[i] = leet_table[j];
				break;
			}

			else if (str[i] == 't' || str[i] == 'T')
			{
				 str[i] = '7';
				 break;
			}

		}
	}

	return (str);

}
