#include "main.h"

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
	char leet_table[];


	len = strlen(str);

	leet_table[] = "4433771100";

	for (i = 0; i < len; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == "aAeEoOtTlL"[j])
			{
				str[i] = leet_table[j];
				break;
			}

		}
	}

	return (str);

}
