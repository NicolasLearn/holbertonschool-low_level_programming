#include <stdio.h>

/**
 * main - entry function, print number of arguments
 * @argc: number of argument of executable
 * @argv: array contain name arguments of executable
 *
 * Return: always 0.
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
