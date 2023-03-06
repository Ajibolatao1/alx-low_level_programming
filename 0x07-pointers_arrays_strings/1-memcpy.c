#include "main.h"

/**
 * _memcpy - the memory copy function
 *
 * @dest: the returned mem
 * @src: memory area
 * @n: int n
 *
 * Return: the returned value
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
