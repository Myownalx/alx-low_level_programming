#include "main.h"

/**
 * _puts - This is the name of the function
 * @str: the parameter of the function
 */

void _puts(char *str)
{
	int m;

	for (m = 0; str[m] != '\0'; m++)
	_putchar (str[m]);
	_putchar ('\n');
}
