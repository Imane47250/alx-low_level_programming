#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - searches for an integer
 * @array: int pointer
 * @size: int
 * @cmp: function pointer
 * Owned by: Imane
 * Return: -1 is size<0 or no elem matches
 *	else index of the first element for which
 *	the cmp function does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{

	int i;

	if (array && size && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
	}
		return (-1);
}
