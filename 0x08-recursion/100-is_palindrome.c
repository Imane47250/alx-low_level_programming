#include "main.h"

/**
  * is_palindrome - checks if a string is a palindrome
  * @s: the string to check
  * Owned by: Imane
  * Return: returns 1 if a string is a palindrome and 0 if not.
  **/
int is_palindrome(char *s)
{
	if (*s == 0)
	{
		return (1);
	}
	return (intermediaire_2(s, 0, _strlen_recursion(s)));
}

/**
  * _strlen_recursion - returns the length of a string
  * @s: string in question
  * Owned by: Imane
  * Return: length of string
  **/
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
		return (0);
}

/**
 * intermediaire_2 - recursively checks the characters for palindrome
 * @s: string to check
 * @i: iterator
 * @len: length of the string
 * Return: 1 if palindrome, 0 if not
 */
int intermediaire_2(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (intermediaire_2(s, i + 1, len - 1));
}
