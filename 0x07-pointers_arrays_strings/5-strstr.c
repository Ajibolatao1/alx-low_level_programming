#include "main.h"
#include <stddef.h>

/**
 * _strstr: a function that locates a substring
 *
 * @haystack: the first arguement
 *
 * @needle: the second arguement
 *
 * Return: The returned value
 */

char *_strstr(char *haystack, char *needle)
{
	char *p1, *p2, *p3;
	
	if (*needle == '\0')
		return (haystack);


	p1 = haystack;

	while (*p1 != '\0')
	{
		if (*p1 == *needle)
		{
			p2 = needle;
			p3 = p1;
		

			while (*p2 != '\0' && *p3 == *p2)
			{
				p2++;
				p3++;
			}

			if (*p2 == '\0')
				return (p1);
		}
		p1++;

	}
	return (NULL);

}
