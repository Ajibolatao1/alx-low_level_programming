#include <stdio.h>

/**
 * main - the entry
 *
 * for - to loop over the alphabets
 *
 * putchar - to print a letter at a time
 *
 * Return: The retrurn value
 */

int main(void)
{
	for (char ch='A'; ch <='Z'; ch++)
		putchar(ch);
	for (char ch='a'; ch<='z' ch++)
		putchar(ch);

	return (0);
}
