#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry function, multiplies two numbers
 * @argc: number of argument of executable
 * @argv: array contain value arguments of executable
 *
 * Return: 0 if sucess. 1 if don't receive two arguments.
 */
int main(int argc, char *argv[])
{
	int i;
	int tab[2] = {0};

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
		tab[i - 1] = atoi(argv[i]);
	printf("%d\n", tab[0] * tab[1]);
	return (0);
}
