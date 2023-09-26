#include "main.h"

/**
 * _memcpy - function name
 * @dest: parameter a
 * @src: parameter b
 * @n: parameter c
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int m;

	for (m = 0; m < n; m++)
	{
		dest[m] = src[m];
	}
	return (0);
}
