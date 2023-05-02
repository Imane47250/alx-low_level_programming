#include "main.h"
/**
* swap_int - swaps the value of int a and int b
* @a: first int
* @b: second int
* Owned by Imane
* Return void
*/
void swap_int(int *a, int *b)
{
		int swap;

		swap = *a;
		*a = *b;
		*b = swap;
}
