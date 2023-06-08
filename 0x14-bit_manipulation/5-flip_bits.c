#include "main.h"

/**
 * flip_bits - return how many bits to flip to get from one num to another
 * @n: number
 * @m: number2
 * Owned by: Imane
 * Return: how many bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int diff_bits = 0;
	unsigned long int difference;

	difference = n ^ m;

	do {
		diff_bits += (difference & 1);
		difference >>= 1;
	} while
		(difference > 0);

	return (diff_bits);
}
