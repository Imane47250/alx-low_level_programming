#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to convert
 * Owned by: Imane
 * Return: An integer which is the result of the converted string
 */
int _atoi(char *s)
{
	int c = 0;
	unsigned int result = 0;
	int sign = 1;
	int i = 0;

	while (s[c])
	{
		if (s[c] == 45)
		{
			sign *= -1;
		}

		while (s[c] >= 48 && s[c] <= 57)
		{
			i = 1;
			result = (result * 10) + (s[c] - '0');
			c++;
		}

		if (i == 1)
		{
			break;
		}
		c++;
	}

	result *= sign;
	return (result);
}
