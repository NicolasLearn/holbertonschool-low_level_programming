#include "main.h"
#include <stdio.h>

/**
 * main - entry function, print name of executable
 * @argc: number of argument of executable
 * @argv: array contain name arguments of executable
 *
 * Return: always 0.
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
