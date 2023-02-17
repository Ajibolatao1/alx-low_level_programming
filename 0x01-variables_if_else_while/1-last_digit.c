#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	int l_numb = n % 10;

	if (l_numb > 5)
		printf("Last digit of %d id %d and is greater than 5", n, l_numb);
	if (l_numb == 0)
		printf("Last digit of %d id %d and is 0", n, l_numb);
	if (l_numb < 6)
		printf("Last digit of %d id %d and is less than 6", n, l_numb);


	return (0);
}
