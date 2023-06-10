#include "main.h"

/**
 * get_endianness - checks the endianness.
 * Owned by: Imane
 * Return: 0 if big endian, 1 if little endian
 */


int get_endianness(void)
{
	unsigned int i = 1;
	unsigned char *c = (unsigned char *)&i;

	return (*c);
}
