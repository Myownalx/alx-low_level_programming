#include "main.h"

/**
 * _strlen - function name that calculates the length of the string
 * @s: The function parameter
 * Return: Returns Total length of string
 */

int _strlen(char *s)
{
	int m;
	int total = 0;

	for (m = 0; s[m] != '\0'; m++)
		total++;
	return (total);
}
