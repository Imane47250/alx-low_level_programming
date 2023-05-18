#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates array of integers
 * @min: min value of integers
 * @max: max value of integers
 * Owned by: Imane
 * Return: pointer to the newly created  array
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i;
	int n = (max - min + 1);

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * n);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < n; i++)
		ptr[i] = min++;

	return (ptr);
}
