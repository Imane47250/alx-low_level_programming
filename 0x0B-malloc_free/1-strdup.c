#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 *		which contains a copy of the string given as a parameter
 * @str: string to copy
 * Owned by: Imane
 * Return: pointer to the copy of the string in allocated memory
 */

char *_strdup(char *str)
{
	char *copied_str;
	int i = 0, len = 0;

	if (str == NULL)
		return (NULL);

	while (*(str + i))
		len++, i++;
	len++;

	copied_str = malloc(sizeof(char) * len);

	if (copied_str == NULL)
		return (NULL);

	i = 0;
	while (i < len)
	{
		*(copied_str + i) = *(str + i);
		i++;
	}

	return (copied_str);
}
