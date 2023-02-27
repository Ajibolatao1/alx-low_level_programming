#include <stddef.h>

/**
 * strlen - the string length value
 *
 * @str: the passed string
 *
 * Return: the returned value
 */

size_t strlen(const char *str)
{
	const char *p = str;

	while (*p != '\0')
	{
		p++;
	}

	return (p - str);
}
