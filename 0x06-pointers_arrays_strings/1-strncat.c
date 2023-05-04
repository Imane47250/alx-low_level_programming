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
	int j = 0;

	while (dest[i] != '\0') /*i is index of null terminator*/
		i++;

	while (src[j] != src[n]) /*append replacing null terminator*/
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
