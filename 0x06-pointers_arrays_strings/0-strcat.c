#include "main.h"

/**
 * @dest: first passed in variable
 *
 * @src: second variable
 *
 * Return: the returned value
 *
 */



char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*ptr != '\0')
		ptr++;

	while(*src != '\0')
		*ptr++ = *src++;

	*ptr = '\0';

	return dest;


}
