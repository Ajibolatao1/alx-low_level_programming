#include "main.h"

/**
 * *_strncat - the strngcat function
 *
 * @dest: the first variable
 *
 * @src: the second variable
 *
 * @n: append n from the source code
 *
 * Return: the returned value
 *
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	char *ptr = dest;

	while (*ptr != '\0')
		ptr++;

	i = 0;

	while (*src != '\0' && i < n)
	{
		*ptr++ = *src++;
		i++;
	}

	*ptr = '\0';

	return (dest);

}
