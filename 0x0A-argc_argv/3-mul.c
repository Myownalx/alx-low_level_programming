#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int mut;

	if (argc == 3)
	{
		mut = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mut);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
