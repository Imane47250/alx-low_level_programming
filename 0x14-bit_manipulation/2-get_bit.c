#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number
 * @index: index within binary number
 * Owned by: Imane
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;
	unsigned int max_bits;

	max_bits = (sizeof(unsigned long int) * 8);
	if (index > max_bits)
		return (-1);

	bit = ((n >> index) & 1);

	return (bit);
}
