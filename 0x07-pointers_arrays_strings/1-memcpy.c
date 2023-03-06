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
	int i;
	char *cdest, *csrc;

	cdest = (char *) dest;
	csrc = (char *) src;

	for (i = 0; i < n; i++)
		cdest[i] = csrc[i];

	return (dest);



}
