#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: char to check while going through the string
 * Owned by: Imane
 * Return: length of the string
 */
int _strlen(char *s)
{
	int count = 0;

	for (; *s++;)
		count++;
	return (count);
}

/**
  * puts_half - prints half of a string, followed by a new line
  * @str: the char to check
  * Owned by: Imane
  * Description: I will use the strlen function made in task 2
  * Return: void
  **/
void puts_half(char *str)
{
	int i;
	int length = _strlen(str);

	if (length % 2 != 0)
		i = (length / 2) + 1;
	else
		i = (length / 2);

	while (i < length)
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
