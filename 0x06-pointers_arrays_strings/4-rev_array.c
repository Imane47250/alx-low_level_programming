#include "main.h"

/**
 * reverse_array - reverse the content of an array of integers.
 * @a: the array
 * @n: the number of elements in the array
 */

void reverse_array(int *a, int n)
{

	int i, beginning = 0;
	int ending = n - 1;

	while (beginning < ending)
	{
		i = *(a + beginning);
		*(a + beginning) = *(a + ending);
		*(a + ending) = i;
		beginning++, ending--;
	}
}
