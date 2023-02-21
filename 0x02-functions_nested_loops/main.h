/* 1. */

void print_alphabet(void)
{
	int i;

	i = 97;
	while (i < 123)
	{
		_putchar(i);
		i++;
	}

}

/* 2 */

void print_alphabet_x10()
{
	int i, j;

	i = 97;
	j = 0;
	while (j < 10)
	{
		while (i < 123)
		{
			_putchar(i);
			i++;
		}
		i = 97;
		j++;
	}
}
