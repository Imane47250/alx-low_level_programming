#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms
 *        of the fibonnaci sequence followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	unsigned long int j, k, l, s;

	j = 1;
	k = 2;
	s = 0;

	for (i = 1; i <= 33; ++i)
	{
		if (j < 4000000 && (j % 2) == 0)
		{
			s = s + j;
		}
		l = j + k;
		j = k;
		k = l;
	}

	printf("%lu\n", s);

	return (0);
}
