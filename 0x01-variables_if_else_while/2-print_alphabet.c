#include <stdio.h>
/**
 * main - This program prints the alphabet in lowercase
 *
 * Return: Always 0
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	putchar(alphabet);
	putchar('\n');
	return (0);
}
