#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Writes a function that prints a name.
 * @name: char pointer
 * @f: pointer
 * Owned by: Imane
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	f(name);
}
