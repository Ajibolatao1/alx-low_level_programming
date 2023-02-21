#include <main.h>

/** main - the entry point
 *
 *
 * Return: the returned value
 */

int _islower(int c);

int main(void)
{

	_islower();
	return (0);
}

int _islower(int c)
{
	if (c >= 97 && c <= 123)
		return (1);
	else 
		return (0);

}
