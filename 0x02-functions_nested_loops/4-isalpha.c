#include "main.h"

/**
 * _isalpha - check if the inputted value is a character
 *
 * c: the inputted character
 *
 * Return: The returned value
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 91)
	       return (1);
	else if (c >= 97 && c <= 123)
		return (1);
	else
		return (0);

}
