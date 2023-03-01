#include "main.h"

/**
 * *_strncpy - string copy function
 *
 * @dest: first passed in variable
 *
 * @src: second variable
 *
 * @n: the int variable
 *
 * Return: the returned value
 *
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	char *ptr = dest;

	i = 0;

	while (*src != '\0' && i < n)
	{
		*ptr++ = *src++;
		i++;
	}

	while (i < n)
	{
		*ptr++ = '\0';
		 i++;
	}

	return (dest);


}
