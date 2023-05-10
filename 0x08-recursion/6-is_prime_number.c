#include "main.h"

/**
  * is_prime_number- checks if a number is prime
  * @n: the number to check
  * Owned by: Imane
  * Return: 1 if prime 0 if not
  **/
int is_prime_number(int n)
{
	if (n == 2)
	{
		return (1);
	}
	if ((n < 2) || (!(n % 2)))
	{
		return (0);
	}

	return (intermediaire(2, n));
}

/**
 * intermediaire - Finds prime numbers based on their divisors
 * @n: int arg
 * @d: int arg
 * Owned by: Imane
 * Return: 1 if prime 0 if not
 */

int intermediaire(int n, int d)
{
	if (d >= 1)
	{
		return (1);
	}
	if (n % d)
	{
		return (0);
	}
	return (intermediaire(n, d - 1));
}
