#include <main.h>

/** main - check for alphabetic chracter
 *
 *
 * Return: The returned value
 */

int _isalpha(int c);

int main(void)
{
	_isalpa();
	return (0);

}

int _isalpha(int c)
{
	if (c >= 65 && c <= 91 && c >= 97 && c <= 123)
	       return (1);
	else 
		return (0);	

}
