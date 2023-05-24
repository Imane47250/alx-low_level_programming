#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - executes func as a param on each array element.
 * @array: int pointer
 * @size: size_t
 * @action: function pointer
 * Owned by: Imane
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && size && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}

	}
}
