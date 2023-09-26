#include "main.h"

/**
 * *_memset - function name
 * @s: parameter s
 * @b: parameter b
 * @n: parameter n
 * Return: *s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int m;

	for (m = 0; m < n; m++)
	{
		s[m] = b;
	}
	return (s);
}
