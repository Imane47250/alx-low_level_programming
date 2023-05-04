#include "main.h"

/**
 * _strncat - concatenates 2 strings
 * @dest: first string
 * @src: second string
 * @n: number of bytes
 * Owned by: Imane
 * Return: a pointer to the resulting string dest
 **/
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;

	while (*dest)
		dest++;
	for (i = 0; i < n; i++)
	{
		while (*src)
		{
			*dest = *src;
			dest++;
			src++;
		}
		*dest = '\0';
	}
	return (dest);
}
