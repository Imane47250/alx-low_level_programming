#include "main.h"
/**
 * rev_string - reverses a string
 * @s: char to check while browsing the string
 * Owned by: Imane
 * Return: void
 */

void rev_string(char *s)
{
	char reverse = s[0];
	int counter = 0;
	int browse;

	while (s[counter] != '\0')
	counter++;
	for (browse = 0; browse < counter; browse++)
	{
		counter--;
		reverse = s[browse];
		s[browse] = s[counter];
		s[counter] = reverse;
	}
}
