#include <stdio.h>

/**
 * main - this is the entry point
 *
 *
 * Return: the return value
 */

int main(void)
{
	int i, j, first1, second1, first2, second2;

	for (i = 0; i < 99; i++)
	{
		for (j = i + 1; j < 100; j++)
		{
			first1 = i / 10;
			second1 = i % 10;
			first2 = j / 10;
			second2 = j % 10;

			putchar('0' + first1);
			putchar('0' + second1);
			putchar(' ');
			putchar('0' + first2);
			putchar('0' + second2);

			if (i < 99)
			{
				putchar(',');
				putchar(' ');
			}

		}

	}
	putchar('\n');
	return (0);

}
