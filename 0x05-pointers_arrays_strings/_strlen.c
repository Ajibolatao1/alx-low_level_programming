#include <stddef.h>

/**
 * _strlen - the string length value
 *
 * @str: the passed string
 *
 * Return: the returned value
 */

int _strlen(char *s)
{
	char *p;
	int len;

	*p = s;
	len = 0;

	while (*p != '\0')
	{
		len++;
		p++;
	}

	return (len);


}
