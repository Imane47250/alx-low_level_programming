#include <stdlib.h>
#include "main.h"

/**
 * create_array -  creates an array of chars, and initializes
 *			it with a specific char
 * @size: unsigned int
 * @c: char
 * Owned by: Imane
 * Return: char pointer
 */

char *create_array(unsigned int size, char c)
{
	unsigned int count;
	char *character;

	count = 0;


	if (size == 0)
	{
		return (NULL);
	}

	character = malloc(sizeof(char) * size);

	if (character == NULL)
	{
		return (NULL);
	}
	while (count < size)
	{
		character[count] = c;
		count++;
	}

	character[count] = '\0';

	return (character);
}
