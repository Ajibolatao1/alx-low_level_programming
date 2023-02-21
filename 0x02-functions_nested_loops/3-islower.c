#include <main.h>

/** _islower - check if a character is lower case
 *
 *
 * Return: the returned value
 */

int _islower(int c)
{
	if (c >= 97 && c <= 123)
		return (1);
	else 
		return (0);

}
