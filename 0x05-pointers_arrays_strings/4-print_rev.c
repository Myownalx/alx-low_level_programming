#include "main.h"

/**
 * print_rev - Name of the function
 * @s: This is function parameter
 */

void print_rev(char *s)
{
	int m;
	int total = 0;

	for (m = 0; s[m] != '\0'; m++)
	total++;
	for (m = total - 1; m >= 0; m--)
	_putchar (s[m]);
	_putchar ('\n');
}
