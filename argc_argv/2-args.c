#include <stdio.h>

/**
 * main - entry function, print all arguments it receives
 * @argc: number of argument of executable
 * @argv: array contain name arguments of executable
 *
 * Return: always 0.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
