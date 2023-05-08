#include "main.h"

/**
 * _strspn - returns length of string that matches values consistently
 * @s: string to search
 * @accept: target matches
 * Owned by: Imane
 * Return: number of bytes consecutively matched
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j;
	int matches = 0;

	while (*(s + i))
	{
		for (j = 0; *(accept + j); j++)
		{
			if (*(s + i) == *(accept + j))
			{
				matches++;
				break;
			}
			if (*(accept + j + 1) == '\0' && *(s + i) != *(accept + j))
				return (matches);
		}
		i++;
	}
	return (matches);
}
