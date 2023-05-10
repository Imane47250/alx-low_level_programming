#include "main.h"

/**
  * _sqrt_recursion - returns the natural square root of a number.
  * @n: the number in argument
  * Owned by: Imane
  * Return: square root of n
  **/
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n > 0)
	{
		return (intermediaire(n, 0));
	}
	return (0);
}

/**
 * intermediaire - function to find the square root of n
 * @n: int arg
 * @square_root: square to find recursively
 * Owned by: Imane
 * Return: sqaure root
 */

int intermediaire(int n, int square_root)
{
	if (square_root * square_root == n)
	{
		return (square_root);
	}
	else if (square_root * square_root > n)
	{
		return (-1);
	}
	else
		return (intermediaire(n, square_root + 1));
}
