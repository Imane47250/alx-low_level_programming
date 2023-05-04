#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string to encode
 * Owned by: Imane
 * Return: address of s
 */
char *leet(char *s)
{
	int i, j;
	char To_be_replaced[] = "aAeEoOtTlL";
	char Replacement[] = "4433007711";

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (To_be_replaced[j] == s[i])
				s[i] = Replacement[j];
		}
	}
	return (s);
}
