#include "main.h"

/**
 * _memcpy - function name
 * @dest: destination parameter
 * @src: source parameter
 * @n: function paramerter
 * Return: copied memory
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int m;

	for (m = 0; m < n; m++)
	{
		dest[m] = src[m];
	}
	return (dest);
}
