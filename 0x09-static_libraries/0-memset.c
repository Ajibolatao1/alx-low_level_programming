#include "main.h"

/**
 * _memset - the memset method
 * @s: the returned meory
 * @b: constant byte
 * @n: the byte memory
 *
 * Return: The returned value
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n-- > 0)
		*ptr++ = b;

	return (s);

}
