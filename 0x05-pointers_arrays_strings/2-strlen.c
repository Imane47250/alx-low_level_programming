#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: char to check while going through the string
 * Owned by: Imane
 * Return: length of the string
 */
int _strlen(char *s)
{
	int count = 0;

	for (; *s++;)
		count++;
	return (count);
}
