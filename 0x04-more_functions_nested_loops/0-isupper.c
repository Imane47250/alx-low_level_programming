#include "main.h"

/**
  * _isupper - checks if the letter is uppercase or no
  * @c: the character to check
  * Return: 1 if uppercase and 0 else
  */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
