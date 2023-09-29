#include "main.h"

/**
 * _puts_recursion - function name
 * @s: parameter of the function
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	return;

	puts(s);
}
