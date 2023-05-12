#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments it receives.
 * @argc: argument counter
 * @argv: pointer to array of arguments
 * Owned by: Imane
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
		printf("%s\n", argv[i++]);

	return (0);
}
